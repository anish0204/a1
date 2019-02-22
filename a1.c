#include <stdio.h>
#include <stdlib.h>
int *fetch();
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};   //1
    printf("%d",a[11]);

    int x,y;                              //2
    int *ptr;                             
    ptr = fetch();
    int i = 1;
    printf("%d",i);
    printf("val = %d",*ptr);
    return 0;
    void *p1;
    printf(sizeof(p1));
    int b;                              //4
    b++;

}

int *fetch()
{
    int val = 100;
    return &val;
}                                   //3

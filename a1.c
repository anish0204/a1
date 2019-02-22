#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",a[10]);
    char a[5] = {'a','b','s','v','l'};

    int x,y;
    int *ptr;
    ptr = fetch();
    int i = 1;
    i = i++ * ++i;
    printf(i);
    printf("val = %d",*ptr);
    return 0;
    void *p1;
    printf(sizeof(p1));
    int b;
    b++;

}

int *fetch()
{
    int val = 100;
    return &val;
}

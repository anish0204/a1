#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",a[9]);
    //char a[5] = {'a','b','s','v','l'};
    
    int x,y;
    int *ptr;
    int a = 10;
    int i = 1;
    i = i++ * ++i;
    printf(i);
    ptr = &a;
    printf("val = %d",*ptr);
    return 0;
    int *p1;
    printf(sizeof(p1));
    int b =1;
    b++;
    printf("%d",b);
}



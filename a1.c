#include <stdio.h>
#include <stdlib.h>
int *fetch();
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};   //1
    printf("%d",a[9]);

                                  //2
    int *ptr;                             
    ptr = fetch();
    int i = 1;
    printf("%d",i);
    printf("val = %d",*ptr);
    int *p1;
    printf(sizeof(p1));
    return 0;
    
    //int b=1;                              //4
    //b++;
    

}

//int *fetch()
//{
  //  int val = 100;
    //return &val;
//}                                   //3

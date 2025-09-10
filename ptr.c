#include<stdio.h>
int main()
{
    int a,b,mul;
    int *ptr1,*ptr2;
    printf("enter the frist number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    mul=(*ptr1**ptr2);
    printf("mul=%d",mul);
    return 0;
}
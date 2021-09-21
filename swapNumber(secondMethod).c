#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("You have enter for a=%d & b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swaping of a=%d & b=%d",a,b);
}
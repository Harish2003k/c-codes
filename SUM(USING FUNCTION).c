#include <stdio.h>
void sum();
void sum()
{
    printf("\n: SUM USING FUNCTION CALLING :");
    int n1,n2,sum=0;
    printf("\nEnter The Two number :");
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    printf("Sum=%d",sum);
}
void main()
{
    sum();
    printf("\n WELCOME TO FUNCTION:");
    sum();
    sum();
}


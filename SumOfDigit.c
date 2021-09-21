#include<stdio.h>
int main()
{
    int num,b,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num !=0)
    {
        b=num%10;
        sum=sum+b;
        num=num/10;
    }
    printf("Sum of digit =%d",sum);
}
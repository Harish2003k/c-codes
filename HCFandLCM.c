#include<stdio.h>
int main()
{
    int a,b,x,y,t,gcd,lcm;
    printf("Enter the two number\n");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("GCD is %d\n",gcd);
    printf("LCM is %d",lcm);
}
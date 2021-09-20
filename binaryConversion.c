// Convert into Decimal Number into Binary Number
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number \n");
    scanf("%d",&number);
    int dec[31],i=0;
    while(number>0)
    {
      dec[i] = number%2;
      number=number/2;
      i++;
    }
    int j;
    for(j=i-1;j>=0;j--)
    {
        printf("%d",dec[j]);
    }
}
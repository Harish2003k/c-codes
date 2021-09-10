#include<stdio.h>
void main()
{
    int n=9,i,j;
    // for straight triangle
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    // for inverted triangle
    for(i=n;i>=0;i--)
    {
        for(j=i;j>=0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
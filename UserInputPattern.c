#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter The number of row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf("%c",63+i);
        }
        printf("\n");
    }
}

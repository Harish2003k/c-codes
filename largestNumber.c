#include<stdio.h>
int main()
{
    int a=21,b=122;
  //  printf("Enter the two number:");
   // scanf("%d%d%d",&a,&b);
      if(a == b)
        printf("Both are equal\n");
        
    else if(a < b)
    {
        printf("\n\nThe largest number is %d\n", b);
        printf("\nThe smallest number is %d\n", a);
    }
    else
    {
        printf("The smallest number is %03d\n", b);
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
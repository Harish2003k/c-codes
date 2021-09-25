#include <stdio.h>
       int main() {
      int i,n,a[100];
      printf("Input The Number of element to store in the array:");
      scanf("%d",&n);
      printf("Input %d number of elemnet in the array\n",n);
      for(i=0;i<n;i++) // indexing of element in the array
      {
          printf("Element -% 5d:",i); // store the number of element of array
          scanf("%d",&a[i]);
      }
          printf("The value store in the array are:\n");
      for(i=0;i<n;i++)
      {
          printf("% 5d",a[i]);
      }
          printf("\n\n The store number into the array in reverse order are:\n");
      for(i=n-1;i>=0;i--)
      {
          printf("% 5d",a[i]);
      }
         printf("\n ******* Successful ******** \n");
    }
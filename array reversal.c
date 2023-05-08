//array reveral by taking array size by user.

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int i, temp, n;
   printf("Enter your array size");
   scanf("%d", &n);
   int arr[n];
   printf("Enter your array:");
   for (i = 0; i < n; ++i)
   {
      scanf("%d", &arr[i]);
   }
   for (i = 0; i < (n+1)/2; ++i)
   {
      temp = arr[i];
      arr[i] = arr[n - i - 1];
      arr[n - i - 1] = temp;
   };
   printf("your array is");
   for (i = 0; i < n; ++i)
   {
      printf("%d", arr[i]);
   };
}
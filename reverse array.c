#include <stdio.h>

void arrayRev(int arra[])
{
    int temp,i;
    for(i=0;i<=4;i++)
    {
        temp=arra[i];
        arra[i]=arra[7-i-1];
        arra[7-i-1]=temp;
        
    }
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arra[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
arrayRev(arr);
    return 0;
}
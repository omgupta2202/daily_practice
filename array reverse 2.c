#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr,*arr2, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    arr2=(int*) malloc(num* sizeof(int));
    for (i=0; i<num; i++) {
    arr2[i]=arr[num-i-1];
    
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr2 + i));
    return 0;
}
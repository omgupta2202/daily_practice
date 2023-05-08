#include <stdio.h>
#include <stdlib.h>
main()
{
    printf("WELCOME TO ABC PVT LMT\n");
    int n, i = 0;
    char *ptr;
    for (i = 0; i < n; i++)
    {
        printf("Enter employes name length\n");
        scanf("%d", &n);
        char name[n];
        ptr = (char *)malloc(n * sizeof(char));
        printf("Enter employes name\n");
        scanf("%s", ptr);
        printf(" employes name is %s\n", ptr);
        free(ptr);
    }
}
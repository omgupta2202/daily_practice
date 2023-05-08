#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x, y, i;
    char *str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d%d", &x, &y);
    for (i = x; i < 10&&i<=y; i++)
    {
        printf("%s\n", str[i - 1]);
    }
    while (i > 9 && i <= y)
    {
        if (i % 2 == 0)
            printf("even\n");

        if (i % 2 == 1)
            printf("odd\n");
        i++;
    }
    return 0;
}
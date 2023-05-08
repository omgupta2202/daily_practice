#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
    {

    char s[1001], i;
    int x, y;
    scanf("%s", s);
    for (i = 48; i < 58; i++)
    {
        y = 0;
        for (x = 0; x < strlen(s); x++)
        {
            if (s[x] == i)
            {
                y++;
            }
        }
        printf("%d", y);
    }
    return 0;
}



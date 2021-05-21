#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    int d = 0, i = 0;
    char s[50][50], c = ' ', x, k[50];
    while (i < n)
    {
        strcpy(s[i], "");
        while (c == ' ')
        {
            scanf("%s", k);
            strcat(s[i],k);
            scanf("%c", &x);
            if (x == '\n') break;
            else if (x == ' ')
            {
                c = x;
                strcat(s[i], " ");
            }
        }
        i++;
    }
    if (strcmp(s[0], "Nemo") == 0)
    {
        printf("%s and %s", s[n-1], s[1]);
    }
    else if (strcmp(s[n-1], "Nemo") == 0)
    {
        printf("%s and %s", s[n-2], s[0]);
    }
    else
    {
        for (i = 1; i < n-1; i++)
        {
            if (strcmp(s[i], "Nemo") == 0)
            {
                printf("%s and %s", s[i-1], s[i+1]);
                break;
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    int n = 13;
    char s[50][50], c = ' ', x, k[50];
    int i = 0;
    while (i < n)
    {
        strcpy(s[i], "");
        while (c == ' ')
        {
            scanf("%s", k);
            strcat(s[i], k);
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
    int idx;
    for (int i = 0; i < n; i++)
    {
        if (s[i][0] <= 'L' && s[i+1][0] >= 'L' && s[i+2][0] != 'L')
        {
            idx = i;
            break;
        }
        else if (s[i][0] == 'L' && s[i+1][0] == 'L')
        {
            idx = i;
            break;
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%s\n", s[i]);
        if (idx == i) printf("Louis XIV\n");

    }
    return 0;
}

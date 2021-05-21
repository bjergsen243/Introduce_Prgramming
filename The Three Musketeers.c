#include <stdio.h>
#include <string.h>
int sosanh(char *s1, char *kysi)
{
    if (strcmp(s1, kysi) == 0) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    char s[100][100], c= ' ', x, k[50];
    while ( i < n)
    {
        strcpy(s[i], "");
        while(c == ' ')
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
    char ten[] = "d'Artagnan";
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if((sosanh(s[i], "Athos") == 1 || sosanh(s[i],"Porthos") == 1 || sosanh(s[i],"Aramis") == 1) && (sosanh(s[i+1], "Athos") == 1 || sosanh(s[i+1], "Porthos") == 1 || sosanh(s[i+1],"Aramis") == 1) && (sosanh(s[i+2],"Athos") == 1 || sosanh(s[i+2], "Porthos") == 1 || sosanh(s[i+2], "Aramis") == 1))
        {
            idx = i+2;
            break;
        }
    }
    if (idx != -1)
    for (int i = 0; i < n; i++)
    {
        if (i == n-1) printf("%s", s[i]);
        else
        printf("%s, ", s[i]);
        if (idx == i) {
            printf("%s, ",ten);
        }

    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n-1) printf("%s", s[i]);
            else printf("%s, ", s[i]);
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    char s2[6] = "Zues";
    char *pch = strstr(s,s2);
    if (pch != NULL)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == 'Z' && s[i+1] == 'u' && s[i+2] == 'e' && s[i+3] == 's')
            {
                char temp = s[i+1];
                s[i+1] = s[i+2];
                s[i+2] = temp;
            }
        }
        printf("%s", s);
    }
    else printf("%s", s);

    return 0;
}

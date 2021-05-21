#include <stdio.h>
#include <string.h>
void xoa(char *s, int idx)
{
    int n = strlen(s);
    for (int i = idx; i < n; i++)
    {
        s[i] = s[i+1];
    }
    s[n-1] = '\0';
}
int main()
{
    char s[1000];
    fgets(s, 1000, stdin);
    int n = strlen(s);
    for (int i =  0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                xoa(s, j);
                i--;
                n--;
            }
        }
    }
    printf("%s", s);
    return 0;
}

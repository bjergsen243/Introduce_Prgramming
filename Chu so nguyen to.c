#include <stdio.h>
#include <string.h>
int nto(char s[])
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char s[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        printf("%d\n", nto(s));
    }
    return 0;
}

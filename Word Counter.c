#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{
    char s[200];
    scanf("%[^\n]s", s);
    int count = 0;
    int n = strlen(s);
    for (int i = 0; i < strlen(s)-1;i++)
    {
        if (*(s+i) == ' ' && *(s+i+1) != ' ')
        {
            count++;
        }
    }

    printf("%d", count+1);
    return 0;
}

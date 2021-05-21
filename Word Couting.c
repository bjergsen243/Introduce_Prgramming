#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main()
{
    char *s;
    fgets(s, 10000, stdin);

    int count = 0;
    int i = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (*(s+i) == ' ' && *(s+i+1) != ' ')
        {
            count++;
        }

    }
    count++;
    if (count == 1)
    printf("%d word", count);
    else printf("%d words", count);
    return 0;

}

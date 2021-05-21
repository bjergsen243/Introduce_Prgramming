#include <stdio.h>
#include <string.h>
void thaythe(char *s, char *sub, char *add)
{
    char *pch = strstr(s, sub);
    if (pch == NULL)
    {
        return;
    }
    memmove(
        pch + strlen(add),
        pch + strlen(sub),
        strlen(pch) - strlen(sub) +1
    );
    memcpy(pch, add, strlen(add));
}
int main()
{
    char s[1000];
    fgets(s, 1000, stdin);
    int n = strlen(s);
    thaythe(s, "Kaniel Outis", "Michael Scofield");
    thaythe(s, "Kaniel Outis", "Michael Scofield");
    thaythe(s, "Kaniel Outis", "Michael Scofield");
    printf("%s", s);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    fgets(s,1000, stdin);
    for (int i = 0; i < strlen(s)-1; i++)
    {
        if (s[i] == 'A') printf("T");
        else if (s[i] == 'T') printf("A");
        else if (s[i] == 'G') printf("X");
        else if (s[i] == 'X') printf("G");
    }
    return 0;
}

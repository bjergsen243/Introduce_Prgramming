#include <stdio.h>
int main()
{
    char s[100];
    scanf("%[^\n]s", s);
    printf("Nice to meet you, %s!", s);
    return 0;
}

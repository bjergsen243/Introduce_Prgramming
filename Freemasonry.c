#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    char s2[6] = "mason";
    fgets(s, sizeof(s), stdin);
    if (strstr(s,s2) != NULL) {
        printf("Freemasonry.");
    }
    else{
        printf("Normal string.");
    }
    return 0;
}

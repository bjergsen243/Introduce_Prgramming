#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    fgets(s, 10000, stdin);
    int db = 0, so = 0, kitu = 0;
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {

        if (s[i] >= '0' && s[i]  <= '9')
        {
            so++;
        }
        else if (s[i] >= 'a' && s[i] <='z' || s[i] >= 'A' && s[i] <='Z' ){
            kitu++;
        }
        else db++;
    }
    printf("%d %d %d", kitu, so, db-1);
    return 0;

}

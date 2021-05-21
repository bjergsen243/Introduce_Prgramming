#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    char s2[100];
    fgets(s, 1000, stdin);
    fflush(stdin);
    fgets(s2, 100, stdin);
    int count = 0, count1 = 0;
    int l1 = strlen(s), l2 = strlen(s2);
    int i = 0, j = 0;
    for (i = 0; i < strlen(s);){
        j = 0;
        count = 0;
        while (s[i] == s2[j]){
            i++;
            j++;
            count++;
        }
        if (count == l2-1){
            count1++;
            count = 0;
        }
        else i++;
    }
    printf("%d", count1);
    return 0;
}

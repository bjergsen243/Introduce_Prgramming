#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[50][50], c = ' ', x, k[50];
    int i = 0;
    while (i < n)
    {
        strcpy(s[i], "");
        while (c == ' ')
        {
            scanf("%s", k);
            strcat(s[i], k);
            scanf("%c", &x);
            if (x =='\n') break;
            else if (x == ' ')
            {
                c = x;
                strcat(s[i], " ");
            }
        }
        i++;
    }
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s[i], "Judas Iscariot") == 0)
        {
            idx = i;
            break;
        }
        else idx = -1;
    }
    if (idx >=0 && idx < n){
        for (int i = idx; i < n;i++){
            strcpy(s[i],s[i+1]);
        }
        n--;
        strcpy(s[n], "");
        for (int i = 0; i < n; i++){
            printf("%s\n", s[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++){
            printf("%s\n", s[i]);
        }
    }
    return 0;

}

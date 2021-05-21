#include <stdio.h>
#include <string.h>
int main(){
    int n, dem;
    scanf("%d %d", &n, &dem);
    char s[100][100], c= ' ', x, k[50];
    int i = 0;
    while (i < n){
        strcpy(s[i], "");
        while (c == ' '){
            scanf("%s", k);
            strcat(s[i], k);
            scanf("%c", &x);
            if (x == '\n') break;
            else if (x == ' '){
                c = x;
                strcat(s[i], " ");
            }
        }
        i++;
    }
    int n1 = n, q;
    i = 0;
    while (n != 1)
    {
        n1 = n;
        int dem1 = (dem+i)%n1;
        for (q = dem1; q < n; q++)
        {
            strcpy(s[q], s[q+1]);
        }
        n--;
        strcpy(s[n], "");
        i = dem1;

    }
    printf("%s", s[0]);
    return 0;
}

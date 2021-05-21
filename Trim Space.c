#include <stdio.h>
#include <string.h>
#include <malloc.h>
void xoa(char *s, int idx)
{
    int n = strlen(s);
    for (int i = idx; i < n; i++){
        *(s+i) = *(s+i+1);
    }
    *(s+n-1) = '\0';
}
char* xoakt(char *s)
{
    int stt = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' '){
            stt = i;
            break;
        }
    }
    for (int i = stt; i < strlen(s); i++){
        if (*(s+i) == ' ' && *(s+i+1) == ' '){
            xoa(s,i);
            i--;
        }
    }
    if (stt == 1) xoa(s,0);
    if (s[strlen(s)-1] == ' ') xoa(s,strlen(s)-1);
    return s;
}
int main()
{
    char *s = (char*) malloc(sizeof(s)*1000);
    fgets(s, 1000, stdin);
    s = xoakt(s);
    printf("%s", s);

    return 0;

}

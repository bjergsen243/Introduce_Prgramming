        #include <stdio.h>
#include <string.h>
int checkLen(char s[100])
{
    if (strlen(s) >= 7 && strlen(s) <= 16) return 1;
    else return 0;
}
int checkKyTuDau(char s[100])
{
    if (s[0] >= 'a' && s[0] <= 'z' || s[0] >='A' && s[0] <= 'Z') return 1;
    else return 0;
}
int checkKyTu(char s[100])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 33 && s[i] <= 47 || s[i] >= 91 && s[i] <= 96) return 0;
    }
    return 1;
}
int main()
{
    char s[100];
    fgets(s,sizeof(s), stdin);
    if (checkKyTuDau(s) == 1 && checkLen(s) == 1 && checkKyTu(s) == 1) {
        printf("Valid username.");
    }
    else{
        printf("Invalid username.");
    }
    return 0;

}

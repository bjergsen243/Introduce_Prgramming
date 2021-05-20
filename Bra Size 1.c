#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k;
    if (n >= 63 && n <= 67)
    {
        k = 30;

    }
    else if (n >= 68 && n <= 72)
    {
        k = 32;
    }
    else if (n >= 73 && n <= 77)
    {
        k = 34;

    }
    else if (n >= 78 && n <= 82)
    {
        k = 36;
    }
    else if (n >= 83 && n <= 87)
    {
        k = 38;
    }
    else if (n >= 88 && n <= 92)
    {
        k = 40;
    }
    else if (n >= 93 && n <= 97)
    {
        k = 42;
    }
    else if (n >= 98 && n <= 102)
    {
        k = 44;
    }
    else if (n >= 103 && n <= 107)
    {
        k = 46;
    }
    else k = -1;
    if (k != -1) printf("%d", k);
    else printf("Sorry, we don't have your size!");
    return 0;
}

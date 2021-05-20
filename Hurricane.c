#include <stdio.h>
int main()
{
    int v;
    scanf("%d", &v);
    int k;
    if (v < 74)
    {
        k = 0;
    }
    else if (v >= 74 && v <= 95)
    {
        k = 1;
    }
    else if (v >= 96 && v <= 110)
    {
        k = 2;
    }
    else if (v >= 111 && v <= 130)
    {
        k = 3;
    }
    else if (v >= 131 && v <= 155)
    {
        k = 4;
    }
    else k = 5;
    printf("%d", k);
    return 0;
}

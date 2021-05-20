#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max, min;
    if (a > b && a > c ) max = a;
    else if (b > c && b > a) max = b;
    else max = c;
    if (a < b && a < c) min = a;
    else if (b < c && b < a) min = b;
    else min = c;
    int tb = a + b + c - max - min;
    printf("%d %d %d", max, tb, min);
    return 0;
}

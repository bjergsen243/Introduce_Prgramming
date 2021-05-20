#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int k;
    if (a != b && a != c && b != c) k = 3;
    if (a != b && a != c && b == c) k = 2;
    if (a == b && b == c ) k = 1;
    if ((a == b && b != c ) || (a == c && b != c) || (b == c && a != c) ) k =2;
    printf("%d", k);
    return 0;
}

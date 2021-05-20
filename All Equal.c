#include <stdio.h>
int check(int a, int b, int c)
{
    if (a == b && b == c) return 1;
    else return 0;
}
int main()
{
    int a, b, c;
    // nhap 3 so a, b, c
    scanf("%d %d %d", &a, &b, &c);
    if (check(a,b,c) == 1) printf("true");
    else printf("false");
    return 0;
}

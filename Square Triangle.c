#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a >0 && b > 0 && c > 0 &&(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)) printf("true");
    else printf("false");
    return 0;
}

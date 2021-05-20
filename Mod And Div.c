#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int pn = a / b;
    int pd = a%b;
    printf("%d %d", pn, pd);
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    // nhap 2 so a,  b
    scanf("%d %d", &a, &b);
    int c = 0;
    int k = a;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    c = a;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    a = b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    b = c;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}

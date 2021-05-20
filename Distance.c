#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    //printf("Nhap 2 so a, b: ");
    scanf("%d %d", &a, &b);
    float c = sqrt(a*a + b*b);
    printf("%.2f", c);
    return 0;
}

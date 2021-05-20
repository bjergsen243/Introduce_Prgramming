#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    float tile;
    // printf("Nhap gia tri a va ti le: ");
    scanf("%d %f", &a, &tile);
    float kq = a / tile / 100;
    printf("%.1f", kq);
    return 0;
}

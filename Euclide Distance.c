#include<stdio.h>
#include <math.h>
int main()
{
    float a, b, x, y;
    // nhap cac toa do a, b, x, y
    scanf("%f %f %f %f", &a, &b, &x, &y);
    float len = sqrt((x- a)*(x-a) + (y -b)*(y-b));
    printf("%.2f", len);
    return 0;
}

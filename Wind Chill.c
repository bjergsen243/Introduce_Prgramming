#include <stdio.h>
#include <math.h>
int main()
{
    float t, v;
    // nhap nhiet do t va toc do gio v
    scanf("%f %f", &t, &v);
    float w = 35.74 + 0.6215*t + pow(v,0.16)*(0.4275*t - 35.75);
    printf("%.2f", w);
    return 0;
}

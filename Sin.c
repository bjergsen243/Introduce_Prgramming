#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    scanf("%f", &x);
    int k = 1;
    float s, sh;
    s = x, sh = x;
    while (fabs(sh) > 0.001)
    {
        sh = -sh*x*x/(2*k*(2*k+1));
        s += sh;
        k++;
    }
    printf("%.4f", s);
    return 0;
}

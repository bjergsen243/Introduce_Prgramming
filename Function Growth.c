#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    scanf("%f", &n);
    float loga = log(n)/log(2);
    float binh = n*n;
    float b3 = n*n*n;
    float n2 = n*2;
    if (n < 0)
    {
        printf("invalid");
    }
    else
    {
        printf("%.1f %.1f %.1f %.1f %.1f", n, loga, binh, b3, n2);
    }
    return 0;
}

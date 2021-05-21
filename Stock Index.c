#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    double a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
    double hieu = 0;
    for (int i = 1; i < n; i++)
    {
        hieu = a[i] - a[i-1];
        if (hieu < 0) hieu *= -1;
        printf("%.2lf ", hieu);
    }
    return 0;
}

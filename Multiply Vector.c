#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &b[i]);
    }
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i]*b[i];
    }
    printf("%.2lf", sum);
    return 0;
}

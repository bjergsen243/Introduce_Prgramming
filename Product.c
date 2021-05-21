#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
    long double sum = 1;
    for (int i = 0; i < n; i++)
    {
        sum *= a[i];
    }
    printf("%.2llf", sum);
    return 0;
}

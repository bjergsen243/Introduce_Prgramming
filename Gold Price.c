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
    double max = a[0], min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    printf("%.2lf %.2lf", max, min);
    return 0;
}

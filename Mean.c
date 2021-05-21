#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    double tb = 0;
    if (n != 0)
    {
        tb = 1.0*sum/n;
    }
    printf("%.2lf", tb);
    return 0;

}

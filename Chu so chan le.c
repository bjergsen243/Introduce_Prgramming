#include <stdio.h>
void SoChanSoLe(int n)
{
    int demc = 0, deml = 0;
    while (n != 0)
    {
        int du = n % 10;
        if (du % 2 == 0) demc++;
        else deml++;
        n /= 10;
    }
    printf("%d %d\n", demc, deml);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        SoChanSoLe(a[i]);
    }
    return 0;
}

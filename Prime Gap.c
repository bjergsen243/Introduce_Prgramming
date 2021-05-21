#include <stdio.h>
int checksnt(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int k;
    int dem = 0, max = 0;
    for (int i = 2; i <= n; i++)
    {
        dem = 0;
        while (checksnt(i) == 0)
        {
            dem++;
            i++;
        }
        if (dem > max)
        {
            max = dem;
            k = i;
        }
    }
    for (int i = k - max; i < k; i++)
    {
        printf("%d ", i);
    }
    return 0;

}

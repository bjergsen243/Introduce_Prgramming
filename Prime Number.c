#include <stdio.h>
int checksnt(int n)
{
    if (n < 2)return 0;
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
    if (checksnt(n) == 1) printf("%d is a prime number", n);
    else printf("%d is not a prime number", n);
    return 0;
}

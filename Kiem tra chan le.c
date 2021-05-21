#include <stdio.h>
int checkchan(int n)
{
    if (n ==0) return 1;
    while (n != 0)
    {
        int du = n % 10;
        if (du % 2 != 0) return 0;
        n /= 10;
    }
    return 1;
}
int checkle(int n)
{
    while (n != 0)
    {
        int du = n % 10;
        if (du % 2 == 0) return 0;
        n /= 10;

    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i =0 ; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (checkchan(a[i]) == 1 || checkle(a[i]) == 1)
        {
            printf("yes\n");
        }
        else printf("no\n");
    }
    return 0;
}

#include <stdio.h>
int check(int n)
{
    int sum = 0;
    int k = n;
    while (n != 0)
    {
        int du = n % 10;
        sum = sum*10 + du;
        n /= 10;
    }
    if (sum == k) return 1;
    else return 0;
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
        if (check(a[i]) == 1 )
        {
            printf("yes\n");
        }
        else printf("no\n");
    }
    return 0;
}

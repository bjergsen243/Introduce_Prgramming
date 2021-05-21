#include <stdio.h>
int sofibo(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return sofibo(n-1) + sofibo(n-2);
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sofibo(i));
    }
    return 0;
}

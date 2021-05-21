#include <stdio.h>
int checkshh(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (checkshh(n) == 1) printf("true");
    else printf("false");
    return 0;
}

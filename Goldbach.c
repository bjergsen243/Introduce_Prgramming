#include <stdio.h>

int checksnt(int n)
{
    if (n < 2) return 0;
    for (int i =2 ;i*i <= n;i++)
    {
        if (n% i == 0) return 0;
    }
    return 1;

}
int main()
{
    int n, i;
    scanf("%d", &n);
    if (n % 2 ==0 )
    {
       for (i = 2; i< n/2; i++)
    {
        if (checksnt(i) == 1&& checksnt(n-i) == 1)
        {
            break;
        }
    }
    printf("%d %d", i, n-i);
    }
    else printf("-1");
    return 0;

}

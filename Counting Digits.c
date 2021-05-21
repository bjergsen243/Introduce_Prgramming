#include <stdio.h>
#include <math.h>
int demscs(int n)
{
    int sum = 0;
    if (n == 0) sum = 1;
    else
    {
        while (n != 0)
        {
            sum++;
            n /= 10;
        }
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    n = fabs(n);
    printf("%d", demscs(n));
    return 0;
}

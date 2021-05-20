#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("invalid");
    }
    else
    {
        float k = ceil(n / 2.7180);
        printf("%.0f", k);
    }
    return 0;
}

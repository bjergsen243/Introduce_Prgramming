#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, i = 1;
    if (n < 0) printf("invalid");
    else
    {
        while (n != 0)
        {
            int du = n % 2;
            sum += i* du;
            i *= 10;
            n /= 2;
        }
        printf("%d", sum);
    }

    return 0;
}

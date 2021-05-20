#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    scanf("%f", &n);
    float k;
    if (n < 0)
    {
        printf("So nhap nho hon 0");
    }
    else
    {
        k = sqrt(n);
        printf("%.2f", (k));
    }

    return 0;
}

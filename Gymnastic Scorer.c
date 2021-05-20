#include <stdio.h>
int main()
{
    float a[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &a[i]);
    }
    float sum = 0;
    float max = a[0], min = a[0];
    for (int i = 1; i < 6; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min )
        {
            min = a[i];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        sum += a[i];
    }
    float dtb = (sum - max - min )/4.0;
    printf("%.1f", dtb);
    return 0;

}

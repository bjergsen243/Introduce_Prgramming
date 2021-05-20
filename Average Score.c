#include <stdio.h>
int main()
{
    float a[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &a[i]);
    }
    float tong = (a[0] + a[1] + a[2]) + 2*(a[3] + a[4]) + 3*a[5];
    float dtb = tong/10.0;
    printf("%.2f", dtb);
    return 0;

}

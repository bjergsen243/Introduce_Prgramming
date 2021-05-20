#include <stdio.h>
#include <math.h>
int main()
{
    int second;
    // nhap so giay
    scanf("%d", &second);
    float sophut = second / 60;
    if (second % 60 != 0)
    {
        sophut += 1;
    }
    printf("%.0f", sophut);
    return 0;
}

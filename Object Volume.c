#include <stdio.h>
int main()
{
    float l, b, h;
    // chieu dai, rong, cao
    scanf("%f %f %f", &b, &l, &h);
    float volume = l*b*h;
    printf("%.2f", volume);
    return 0;

}

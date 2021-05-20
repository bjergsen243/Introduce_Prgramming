#include <stdio.h>
#include <math.h>

int main()
{
    float u, l, f;
    scanf("%f %f %f", &u, &l, &f);
    float rva;
    if (u < 0 || l <0 || f < 0)
    {
        printf("invalid");
    }
    else
    {
        rva = u*l*sin(9*f*3.14/180);
        printf("%.1f", rva);
    }

    return 0;
}


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float k;
    switch(n)
    {
        case 0:
        {
            k = 2.61;
            break;
        }
        case 1:
        {
            k = 2.95;
            break;
        }
        default:
        {
            k = 3.17;
            break;
        }
    }
    printf("%.2f", k);
    return 0;
}

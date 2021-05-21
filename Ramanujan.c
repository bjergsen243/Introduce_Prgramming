#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c, d, a3, b3, c3, d3;
    for (a =1; a < n; a++)
    {
        a3 = a*a*a;
        if (a3 > n)
        {
            break;
        }
            for (b = a; b < n; b++)
            {
                b3 = b*b*b;
                if (a3 + b3 > n)
                {
                    break;
                }
                for (c = a+1; c < n; c++)
                {
                    c3 = c*c*c;
                    if( c3 > n)
                    {
                        break;
                    }
                    for (d = c; d < n; d++)
                    {
                        d3 = d*d*d;
                        if (c3 + d3 > n)
                        {
                            break;
                        }
                        if (a3 + b3 == c3 + d3)
                        {
                            printf("%d ", a3+b3);
                        }
                    }
                }
            }
    }
    return 0;
}

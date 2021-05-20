#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j > 2+i || j <= 3-i)
            {
                printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }
}

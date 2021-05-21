#include <stdio.h>
#include <malloc.h>
int main()
{
    int n = 10;
    int *a= (int*) malloc(sizeof(int)*n);
    int dau = 3, duoi = 3, m = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
        if(*(a+i) == 1)
        {
            if (dau < 1)
            {
                printf("invalid attack");
                m++;
                break;
            }
        }
        if (*(a+i) == 2)
        {
            if (duoi <= 0 )
            {
                printf("invalid attack");
                m++;
                break;
            }
            else
            {
                duoi++;
            }
        }
        if (*(a+i) == 3)
        {
            if (dau < 2)
            {
                printf("invalid attack");
                m++;
                break;
            }
            else
            {
                dau -= 2;
            }
        }
        if (*(a+i) == 4)
        {
            if (duoi < 2)
            {
                printf("invalid attack");
                m++;
                break;
            }
            else
            {
                dau++;
                duoi -= 2;
            }
        }
    }
    if (dau == 0 && duoi == 0)
    {
        printf("You slayed the Dragon.");
        m++;
    }
    else if (m == 1)
    {
        printf("You die.");
    }
    return 0;


}

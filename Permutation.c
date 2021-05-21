#include <stdio.h>
#include <math.h>
#include <malloc.h>
int main()
{
    int n = 5;
    int *a = (int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == *(a+i))
            {
                printf("Q ");
            }
            else printf("* ");
        }
        printf("\n");
    }
    return 0;

}

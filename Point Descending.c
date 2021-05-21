#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    long double *a =(long double*) malloc(sizeof(long double)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%llf", (a+i));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(a+i) < *(a+j))
            {
                long double temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2llf ", *(a+i));
    }
    return 0;

}

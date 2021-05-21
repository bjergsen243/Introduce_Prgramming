#include <stdio.h>
#include <malloc.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    long double **a = (long double**) malloc(sizeof(long double*)*m);
    for (int i =0; i < m; i++)
    {
        *(a+i) = (long double*) malloc(sizeof(long double)*n);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%llf", (*(a+i)+j));
        }
    }
    int k;
    scanf("%d", &k);
    k--;
    double sum =0;
    for (int i = 0; i < n; i++)
    {
        sum += *(*(a+k)+i);
    }
    printf("%.2lf", sum);
    return 0;
}

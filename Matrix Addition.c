#include <stdio.h>
#include <malloc.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int **a = (int**) malloc(sizeof(int*)*m);
    for (int i = 0; i < m; i++
    {
        *(a+i) = (int*) malloc(sizeof(int)*n);
    }
    int **b = (int**) malloc(sizeof(int*)*m);
    for (int i = 0; i < m; i++
    {
        *(b+i) = (int*) malloc(sizeof(int)*n);
    }

    int **c = (int**) malloc(sizeof(int*)*m);
    for (int i = 0; i < m; i++
    {
        *(a+i) = (int*) malloc(sizeof(int)*n);
    }
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", (*(a+i)+j));
        }
    }
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", (*(b+i)+j));
        }
    }
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", *(*(c+i)+j));
        }
    }
    return 0;
}

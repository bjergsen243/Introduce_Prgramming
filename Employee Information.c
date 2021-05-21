#include <stdio.h>
#include <malloc.h>
int main()
{
    int n = 3, m;
    scanf("%d", &m);
    int **a= (int**) malloc(sizeof(int*)*m);
    for (int i =0; i < m; i++)
    {
        *(a+i) = (int*) malloc(sizeof(int)*n);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", (*(a+i)+j));
        }
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if(*(*(a+i)+0) == 0 && *(*(a+i)+1) >30 && *(*(a+i)+2) == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

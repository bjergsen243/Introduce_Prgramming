#include <stdio.h>
#include <malloc.h>
int main()
{
    int m;
    scanf("%d", &m);
    int **a = (int**) malloc(sizeof(int*)*m);
    for (int i =0; i < m; i++)
    {
        *(a+i) = (int*) malloc(sizeof(int)*m);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", (*(a+i)+j));
        }
    }
    int k;
    scanf("%d", &k);
    k--;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < m; i++)
    {
        if (*(*(a+i)+k)== 1) count2++;
        if (*(*(a+k)+i) == 1 ) count1++;
    }
    printf("%d %d", count1, count2);
    return 0;

}

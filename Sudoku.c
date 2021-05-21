#include <stdio.h>
#include <malloc.h>
int check(int **a, int val, int idx1, int idx2)
{
    int idx;
    int count = 0;
    for (int i = 1; i <= 9; i++)
    {
        if (val != *(*(a+idx1)+i) && val != *(*(a+i)+idx2))
        {
            count++;
        }
    }
    if (count == 8) idx = 1;
    else idx = -1;
    return idx;
}
int main()
{
    int n = 9;
    int **a = (int**) malloc(sizeof(int*)*n);
    for (int i = 1; i <= n; i++)
    {
        *(a+i) = (int*) malloc(sizeof(int)*n);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", (*(a+i)+j));
        }
    }
    int val, idx1, idx2;

    scanf("%d %d %d", &val, &idx1, &idx2);
    if (val > 9 || val < 1)
    {
        printf("Invalid number.");
    }
    else if (idx1 < 1 || idx1 >9 || idx2 < 1 || idx2 > 9)
    {
        printf("Invalid place.");
    }
    else if (1 <= val && val <= 9)
    {
        if (check(a, val, idx1, idx2) == -1)
        {
            printf("Valid place.");
        }
        else printf("Invalid place.");
    }
    return 0;
}

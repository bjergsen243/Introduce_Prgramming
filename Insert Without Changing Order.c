#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    long double *a = (long double*) malloc(sizeof(long double)*(n+1));
    for (int i = 0; i < n; i++)
    {
        scanf("%llf", (a+i));
    }
    long double val;
    scanf("%llf", &val);
    int idx;
    if (val < *(a+0)) idx = 0;
    if (val < *(a+n-1) && val > *(a+n-2)) idx = n-1;
    for (int i = 1;i < n-1; i++)
    {
        if (val > *(a+i) && val < *(a+i+1))
        {
            idx = i+1;
        }
    }
    n++;
    for (int i = n-1; i > idx; i--)
    {
        *(a+i) = *(a+i-1);
    }
    *(a+idx) = val;
    for (int i = 0 ;i < n; i++)
    {
        printf("%.2llf ", *(a+i));
    }
    return 0;
}

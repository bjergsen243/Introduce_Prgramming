#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    double *a= (double*) malloc(sizeof(double)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", (a+i));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j =i+1; j < n; j++)
        {
            if (*(a+i) > *(a+j))
            {
                double temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
    double medi;
    if (n % 2 != 0)
    {
        medi = *(a+(n-1)/2);
    }
    else
    {
        medi = 1.0*(*(a+n/2) + *(a+n/2-1))/2;
    }
    printf("%.2lf", medi);
    return 0;
}

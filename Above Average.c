#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    double *a= (double*) malloc(sizeof(double)*n);
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", (a+i));
        sum += *(a+i);
    }
    double tb = 1.0*sum/n;
    for (int i = 0; i < n; i++)
    {
        if (*(a+i) >= tb)
        {
            printf("%.2lf ", *(a+i));
        }
    }
    return 0;

}

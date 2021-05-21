#include <stdio.h>
#include <malloc.h>
double timmax(double *a, int n)
{
    double max = *(a+0);
    for (int i = 1; i < n; i++)
    {
        if (max < *(a+i))
        {
            max = *(a+i);
        }
    }
    return max;
}
int idxmax(double *a, int n)
{
   double max = *(a+0);
   int idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < *(a+i))
        {
            max = *(a+i);
            idx = i;
        }
    }
    return idx;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("invalid");
        return 0;
    }
    double *a= (double*) malloc(sizeof(double)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", (a+i));
        if (*(a+i) < 0 || *(a+i) > 1)
        {
            printf("invalid");
            return 0;
        }
    }
    double max;
    int cuu, dem = 0;
    for (int i = 0; i < n; i++)
    {
        if(*(a+i) < 0.05)
        {
            dem++;
        }
    }
    if (dem == n)
    {
        printf("No one is alive.");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        max = timmax(a,n);
        cuu = idxmax(a,n); // vi tri co ti le lon nhat
        if (max >= 0.05)
        {
            printf("%d ", cuu);
           *(a+cuu) = 0;
            for (int k = 0; k < n; k++)
            {
                *(a+k) *= 0.5;
            }
        }
        else return 0;
    }
}

#include <stdio.h>
#include <math.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *a= (int*) malloc (sizeof(int)*n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
        sum += *(a+i);
    }
    double tb = 1.0*sum/n;
    double sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += pow(*(a+i) - tb,2);
    }
    double ps = 1.0*sum1/n;
    printf("%.2lf", ps);
    return 0;
}

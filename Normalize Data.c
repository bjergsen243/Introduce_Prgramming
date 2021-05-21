#include <stdio.h>
#include <malloc.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *a =(int*) malloc(sizeof(int)*n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
        sum += *(a+i);
    }
    double tb = 1.0*sum/n;
    double sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += pow(*(a+i)-tb,2);
    }
    double ps = sqrt(sum2/n);
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf ", (*(a+i) - tb)/ps);
    }
  return 0;

}

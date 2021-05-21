#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *a= (int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
    }
    int count = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if (*(a+i) ==7)
        {
            printf("%d ", i);
        }
        else count++;
    }
    if (count == n) printf("Not found");
    return 0;
}

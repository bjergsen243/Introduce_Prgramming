#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *a =(int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(a+i) == *(a+j))
            {
                for (int k = j; k < n; k++)
                {
                    *(a+k) = *(a+k+1);
                }
                n--;
                j--;
            }
        }
    }
    for (int i =0 ; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
    return 0;
}

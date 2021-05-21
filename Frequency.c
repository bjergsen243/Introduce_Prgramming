#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int*) malloc (sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
    }
    int *b = (int*) malloc(sizeof(int)*100);
    int *c =(int*) malloc(sizeof(int*)*100);

    for (int i = 0; i < n; i++)
    {
        *(b+*(a+i)) = 0;
    }
    for (int i = 0; i < n; i++)
    {
        (*(b+*(a+i)))++;
        *(c+i) = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (*(c+*(a+i)) < 1)
        {
            printf("%d %d\n", *(a+i), *(b+*(a+i)));
            (*(c+*(a+i)))++;
        }
    }
    return 0;

}

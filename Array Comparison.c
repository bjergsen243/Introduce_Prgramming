#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int*) malloc(sizeof(int)*n);
    int *b =(int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", (a+i));
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", (b+i));
    }
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a+i) != *(b+i))
        {
            printf("NO");
            check = 1;
            break;
        }
    }
    if (check == 0) printf("YES");
    return 0;
}

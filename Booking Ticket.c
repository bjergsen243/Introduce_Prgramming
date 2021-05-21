#include <stdio.h>
#include <malloc.h>
int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    int **a = (int**) malloc(sizeof(int*)*m);
    for (int i = 0; i < m; i++)
    {
        *(a+i) = (int*) malloc(sizeof(int)*n);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", (*(a+i)+j));
        }
    }
    int d,c;
    scanf("%d %d", &d, &c);

    if (*(*(a+d-1)+c-1) == 0)
    {
        printf("Your seat is booked. Please complete the payment.");
    }
    else
    {
        printf("Seat %d%d is sold.", d,c);
    }

    return 0;
}

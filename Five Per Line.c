#include <stdio.h>
int main()
{
    for (int i = 1000; i <= 2000; i++)
    {
        printf("%d ", i);
        if (i % 5 == 4) printf("\n");
    }
    return 0;
}

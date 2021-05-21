#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 2*n +1;
    // k là số cột
    // in n dòng nửa trên
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i == j || j == k-i-1)
            {
                printf("* ");

            }else printf(". ");
        }
        printf("\n");
    }
    // in dòng ở giữa
    for (int i = 0; i < k; i++)
    {
        if (i == n ) printf("* ");
        else printf(". ");
    }
    printf("\n");
    // in n dòng tiếp theo
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (j == n-1-i || j == n+1+i)
            {
                printf("* ");
            }
            else printf(". ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int tohop(int k, int n)
{
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return tohop(k-1, n-1) + tohop(k, n-1);
}

// tham khảo trên
// https://nguyenvanhieu.vn/tam-giac-pascal/
int main()
{
    int n;
    scanf("%d", &n);
    // in ra tam giac pascal
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", tohop(j,i));
        }
        printf("\n");
    }
    return 0;
}

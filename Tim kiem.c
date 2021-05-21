#include <stdio.h>
int SoChuSo(int n)
{
    int dem = 0;
    while (n != 0)
    {
        dem++;
        n /= 10;
    }
    return dem;
}
int ViTri(int n, int val)
{
    int dem = 0;
    int k = -1;
    int scs = SoChuSo(n);
    while (n != 0)
    {
        int du = n % 10;
        if (du == val)
        {
            k =  scs - dem;
        }
        dem++;
        n /= 10;
    }
    return k;
}


int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ViTri(a[i], b[i]));
    }
    return 0;

}

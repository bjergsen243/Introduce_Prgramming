#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k = 1;
    for (int i = 0; i < (int)(n/2); i++)
    {
        if (a[i] != a[n-i-1])
        {
            k = 0;
            break;
        }
    }
    if (k == 1) printf("Symmetric array.");
    else printf("Asymmetric array.");
    return 0;
}

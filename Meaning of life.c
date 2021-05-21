#include <stdio.h>
int main()
{
    int n;
    int a[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 42)
        {
            k = 1;
            break;
        }
    }
    if (k == 1) printf("I've found the meaning of life!");
    else printf("It's a joke!");
    return 0;

}

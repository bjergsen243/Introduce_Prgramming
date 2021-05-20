#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k =sqrt(n);
    if (k*k == n) printf("true");
    else printf("false");
    return 0;
}

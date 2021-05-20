#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = n;
    int sum = 0;
    while (n != 0)
    {
        sum = sum*10 + n % 10;
        n /= 10;
    }
    if (k == sum) printf("%d is a palindrome!", k);
    else printf("%d is not a palindrome!", k);
    return 0;
}

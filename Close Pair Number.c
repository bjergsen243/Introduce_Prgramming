#include <stdio.h>
int checkshh(int a, int b)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0 ) sum1 += i;
    }
    for (int i = 1; i < b; i++)
    {
        if (b % i == 0 ) sum2 += i;
    }
    if (a == sum2 && b == sum1) return 1;
    else return 0;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (checkshh(a,b) == 1) printf("true");
    else printf("false");
    return 0;

}

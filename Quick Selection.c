#include <stdio.h>
int Max(int a, int b)
{
    int max = (a > b) ? a : b;
    return max;
}
int Min(int a, int b)
{
    int min = (a < b) ? a : b;
    return min;
}
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int min1 = Min(a,b);
    int min2 = Min(c,d);
    int max1 = Max(a, b);
    int max2 = Max(c, d);
    int maxmin12 = Max(min1, min2);
    int minmax12 = Min(max1, max2);
    int stv;
    if (minmax12 < e && minmax12 > maxmin12)
    {
        stv = minmax12;
    }
    else if (maxmin12 > minmax12 && maxmin12 < e)
    {
        stv = maxmin12;
    }
    else if (e > maxmin12 && e < minmax12)
    {
        stv = e;
    }
    else if (maxmin12 < minmax12 && maxmin12 > e)
    {
        stv = maxmin12;
    }
    printf("%d", stv);
    return 0;

}

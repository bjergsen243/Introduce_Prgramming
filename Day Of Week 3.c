#include <stdio.h>
int main()
{
    int d, m, y;
    scanf("%d %d %d", &d, &m, &y);
    int y0 = y - (14/m)/12;
    int x = y0 + y0/4 - y0/100 + y0/400;
    int m0 = m + 12*((14-m)/12) - 2;
    int d0 = (d+x+31 * m0/12) % 7;
    char s[8][50] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("%s", s[d0]);
    return 0;
}
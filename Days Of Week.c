#include <stdio.h>
int main()
{
    int day, month, year;
    // nhap ngay thang nam
    scanf("%d %d %d", &day, &month, &year);
    int y0 = year - (int)(14 - month)/12;
    int x = y0 + (int)y0/4 - (int)y0/100 + (int)y0/400;
    int m0 = month + 12*(int)((14-month)/12) - 2;
    int d0 = (day + x + 31*(int)m0/12) % 7;
    // in ra ngay
    printf("%d", d0);
    return 0;

}

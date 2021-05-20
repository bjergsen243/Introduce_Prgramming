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
    //printf("%d", d0);
    if (d0 == 0) printf("Sunday\n");
    else if (d0 == 1) printf("Monday\n");
    else if (d0 == 2) printf("Tuesday\n");
    else if (d0 == 3) printf("Wednesday\n");
    else if (d0 == 4) printf("Thursday\n");
    else if (d0 == 5) printf("Friday\n");
    else if (d0 == 6) printf("Saturday\n");

    return 0;

}

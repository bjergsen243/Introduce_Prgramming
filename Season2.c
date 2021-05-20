#include <stdio.h>
int main()
{
    int d, m;
    scanf("%d %d", &d, &m);
    if ((m == 4 || m == 5 ) || (d >= 21 && m == 3) || (d <= 21 && m == 6))
    {
        printf("Spring");
    }
    else if ((m == 7 || m== 8) || (d >= 22 && m == 6) || (d <= 22 && m == 9))
    {
        printf("Summer");
    }
    else if ((m == 10 || m== 11) || (m == 9 && d >= 23) || (m == 12 && d <= 21))
    {
        printf("Autumn");
    }
    else if ((m == 1 || m == 2) || (m == 12 && d <= 22) || (m == 3 && d <= 20))
    {
        printf("Winter");
    }
    return 0;

}

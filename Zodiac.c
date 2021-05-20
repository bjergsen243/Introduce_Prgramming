#include <stdio.h>
int main()
{
    int d, m;
    scanf("%d %d", &d, &m);
    if (m == 1)
    {
        if (d >= 20) printf("Bao Binh");
        else printf("Ma Ket");
    }
    if (m == 2)
    {
        if (d <= 18) printf("Bao Binh");
        else printf("Song Ngu");
    }
    if (m == 3)
    {
        if (d <= 20 ) printf("Song Ngu");
        else printf("Bach Duong");
    }
    if (m == 4)
    {
        if (d <= 19) printf("Bach Duong");
        else printf("Kim Nguu");
    }
    if (m == 5)
    {
        if (d <= 20) printf("Kim Nguu");
        else printf("Song Tu");
    }
    if (m == 6)
    {
        if (d <= 21) printf("Song Tu");
        else printf("Cu Giai");
    }
    if (m == 7)
    {
        if (d <= 22) printf("Cu Giai");
        else printf("Su Tu");
    }
    if (m == 8)
    {
        if (d <= 22) printf("Su Tu");
        else printf("Xu Nu");
    }
    if (m == 9)
    {
        if (d <= 22) printf("Xu Nu");
        else printf("Thien Binh");
    }
    if (m == 10)
    {
        if (d <= 23) printf("Thien Binh");
        else printf("Thien Yet");
    }
    if (m == 11)
    {
        if (d <= 22) printf("Thien Yet");
        else printf("Nhan Ma");
    }
    if (m == 12)
    {
        if (d <= 21) printf("Nhan Ma");
        else printf("Ma Ket");
    }
    return 0;

}

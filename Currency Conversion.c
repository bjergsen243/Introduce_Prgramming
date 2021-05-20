#include <stdio.h>
int main()
{
    long tien;
    scanf("%ld", &tien);
    float usd = tien/22765.0;
    printf("%.2f", usd);
    return 0;
}

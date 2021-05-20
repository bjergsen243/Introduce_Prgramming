#include <stdio.h>
int main()
{
    float gia;
    // nhap so tien cua dong ho
    scanf("%f", &gia);
    float tongtien = gia*1.40 + 10;
    // in ra so tien phai tra
    printf("%.2f", tongtien);
    return 0;
}

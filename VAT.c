#include <stdio.h>
int main()
{
    float a;
    // nhap gia tri thuc cua sp
    scanf("%f", &a);
    float tong = a*1.10;
    // in ra tong tien phai tra sau khi chiu VAT
    printf("%.2f", tong);
    return 0;
}

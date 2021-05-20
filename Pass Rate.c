#include <stdio.h>
int main()
{
    int tongsv, svdo;
    // nhap tong so sinh vien va sinh vien do
    scanf("%d %d", &tongsv, &svdo);
    float tile = 1.0*svdo/tongsv;
    printf("%.2f", tile);
    return 0;
}

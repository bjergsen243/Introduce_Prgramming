#include <stdio.h>
int main()
{
    int a, b;
    // nhap 2 so a, b
    scanf("%d %d", &a, &b);
    // neu ca a va b deu chia het cho 7 thi in true
    // sai thi in false
    if (a % 7 == 0 && b % 7 == 0) printf("true");
    else printf("false");
    return 0;
}

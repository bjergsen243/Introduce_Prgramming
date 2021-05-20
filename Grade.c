#include <stdio.h>
int main()
{
    float diem;
    scanf("%f", &diem);
    if (diem < 4.0) printf("F");
    else if (diem >= 4.0 && diem <= 4.9) printf("D");
    else if (diem >= 5.0 && diem <= 5.4) printf("D+");
    else if (diem >= 5.5 && diem <= 6.4) printf("C");
    else if (diem >= 6.5 && diem <= 6.9) printf("C+");
    else if (diem >= 7.0 && diem <= 7.9) printf("B");
    else if (diem >= 8.0 && diem <= 8.4) printf("B+");
    else if (diem >= 8.5 && diem <= 8.9) printf("A");
    else printf("A+");
    return 0;
}

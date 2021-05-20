#include <stdio.h>
int main()
{
    float cannang, chieucao;
    // nhap can nang, chieu cao
    scanf("%f %f", &cannang, &chieucao);
    float bmi = cannang / (chieucao*chieucao);
    //printf("%.2f", bmi);
    if (bmi < 18.5) printf("Thieu can");
    else if (bmi >= 18.5 && bmi <= 25.0) printf("Binh thuong");
    else if (bmi > 25.0 && bmi < 30.0) printf("Thua can");
    else printf("Beo phi");
    return 0;
}

#include <stdio.h>
int main()
{
    float cannang, chieucao;
    // nhap can nang, chieu cao
    scanf("%f %f", &cannang, &chieucao);
    float bmi = cannang / (chieucao*chieucao);
    printf("%.2f", bmi);
    return 0;
}

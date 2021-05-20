#include <stdio.h>
int main()
{
    float gpa;
    scanf("%f", &gpa);
    if (gpa < 2.0 ) printf("Khong ra duoc truong");
    else if (gpa >= 2.0 && gpa < 2.5) printf("Trung binh");
    else if (gpa >= 2.5 && gpa < 3.2 ) printf("Kha");
    else if (gpa >= 3.2 && gpa < 3.59) printf("Gioi");
    else printf("Xuat sac");
    return 0;
}

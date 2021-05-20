#include <stdio.h>
int main()
{
    char s1[5], s2[5];
    scanf("%s %s", &s1, &s2);
    int diem1 = 0, diem2 = 0, diem = 0;
    // kiem tra la bai thu 1
    if (s1[0] == 'A' && s2[0] == 'A') diem = 2;
    if (s1[0] == 'A') diem1 = 1;
    if (s2[0] == 'A') diem2 = 1;
    if (s1[0] == '1' && s1[1] != '0') diem1 =1;
    if (s1[0] == '2') diem1 = 2;
    if (s1[0] == '3') diem1 = 3;
    if (s1[0] == '4') diem1 = 4;
    if (s1[0] == '5') diem1 = 5;
    if (s1[0] == '6') diem1 = 6;
    if (s1[0] == '7') diem1 = 7;
    if (s1[0] == '8') diem1 = 8;
    if (s1[0] == '9') diem1 = 9;
    if (s1[0] == '1' && s1[1]=='0') diem1 = 10;
    if (s1[0] =='J' || s1[0]=='Q' || s1[0]=='K') diem1=10;
    // kiem tra la bai thu 2
    if (s2[0] == '1' && s2[1] != '0') diem2 =1;
    if (s2[0] == '2') diem2 = 2;
    if (s2[0] == '3') diem2 = 3;
    if (s2[0] == '4') diem2 = 4;
    if (s2[0] == '5') diem2 = 5;
    if (s2[0] == '6') diem2 = 6;
    if (s2[0] == '7') diem2 = 7;
    if (s2[0] == '8') diem2 = 8;
    if (s2[0] == '9') diem2 = 9;
    if (s2[0] == '1' && s2[1]=='0') diem2 = 10;
    if (s2[0] =='J' || s2[0]=='Q' || s2[0]=='K') diem2=10;
    diem = diem1+ diem2;
    if ((diem<=11) && ( (s1[0] == 'A' && s2[0] != 'A') || (s1[0] != 'A' && s2[0] == 'A') )) (diem = diem + 10);
    printf("%d",diem);
    return 0;
}

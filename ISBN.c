#include <stdio.h>
int main()
{
	char a[13];
	scanf("%s",a);
	// nhập xâu a
	int sum = 0;
	// biến tổng để tính tổng
	for (int i = 0, k = 10; i < 9; i++, k--)
	{
		sum += (a[i] -48)*k;
	}
	a[9] = 11*(sum / 11 +1)-sum +48;
	// tính giá trị a[9] bằng cách lấy tổng chia phần nguyên cho 11, +1 rồi nhân thêm 11
	// trừ đi sum tiếp để tính giá trị integer rồi + 48 để ra giá trị bảng ascii
	if (11-sum%11 > 9) a[9] = 'X';
	// nếu hiệu này > 9 nghĩa là 10 thì a[9] sẽ bằng X
    for (int i = 0; i < 10; i++)
    {
        if (i == 1 || i == 4 || i == 9) printf("-%c", a[i]);
        else printf("%c", a[i]);
    }
    // in ra dãy

	return 0;
}

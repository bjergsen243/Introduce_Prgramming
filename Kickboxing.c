#include <stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
    int a[35] = {0,111,112,114,115,117,118,121,122,125,126,129,130,134,135,139,140,146,147,153,154,159,160,166,167,173,174,182,183,188,189,197,198,208,209};
    // co 35 phan tu, i max = 34
	int k = -1;
    for (int i = 0, j = 1; i < 35, j < 34; i+=2, j+=2)
    {
    	if(n >= a[i] && n <= a[j])
    	{
    		k = i;
    		break;
		}
	}
	if (n >= a[34])
	{
		k = 34;
	}
	if (k == 0) printf("Fly Weight");
	else if (k == 2) printf("Super Fly Weight");
	else if (k == 4) printf("Bantam Weight");
	else if (k == 6) printf("Super Bantam Weight");
	else if (k ==8 ) printf("Feather Weight");
	else if (k == 10) printf("Super Feather Weight");
	else if (k == 12) printf("Light Weight");
	else if (k == 14) printf("Super Light Weight");
	else if (k == 16) printf("Welter Weight");
	else if (k == 18) printf("Super Welter Weight");
	else if (k == 20) printf("Middle Weight");
	else if (k == 22) printf("Super Middle Weight");
	else if (k == 24) printf("Light Heavy Weight");
	else if (k == 26) printf("Super Light Heavy Weight");
	else if (k == 28) printf("Cruiser Weight");
	else if (k == 30) printf("Super Cruiser Weight");
	else if (k == 32) printf("Heavy Weight");
	else if (k == 34) printf("Super Heavy Weight");
	return 0;
}

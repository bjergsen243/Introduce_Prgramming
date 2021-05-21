#include <stdio.h>
#include <math.h>
int giong3(int a,int b,int c) {
	if (a==b || b==c || c==a) return 0;
	else return 1;
}
int giong4(int a,int b,int c,int d) {
	if (a==b || b==c || c==d || a==d ||a==c||b==d) return 0;
	else return 1;
}
int main() {
	long long i, j, n, m, a, b;
	scanf("%lld", &m);
	for (n = 5; n <= m; n++)
	{
		for (i = 1; i < n; i++)
		{
		    for (j = 2; i <n; j++)
		    {
		        if (i==j) break;
		        else for (a = 3; a < n; a++)
		        {
		            if (giong3(i,j,a) == 0) break;
		            else for (b = 4; b < n; b++)
		            {
		                if (giong4(i,j,a,b) == 0) break;
		                else
		                {
		                    if (pow(i,5) + pow(j,5) + pow(a,5)+pow(b,5) == pow(n,5))
		                    {
		                        printf("%d^5 + %d^5 + %d^5 + %d^5 = %d^5", b,a,j,i,n);
		                    }
		                }
		            }
		        }
		    }
		}
	}
	return 0;
}

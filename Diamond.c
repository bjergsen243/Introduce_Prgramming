#include <stdio.h>
int main()
{
    // ve hinh kim cuong
    int n;
    scanf("%d", &n);
    int w = 0;
    int k = 2*n+1;
    int a = n+1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j == a) printf("* ");
            if ((j == a-w || j == a + w) && w !=0) printf("* ");
            if (((j > a-w && j < a) || (j < a+w && j > a)) && (w != 0))
                printf(" ");
            if (j == k) printf(". \n");
            else if ((j < a-w) || (j > a+w)) printf(". ");
        }
        w++;
    }
    // ve nua ben tren
    for (int i = 1; i <= k; i++)
    {
        if(i == k) printf("*\n");
        else printf("* ");
    }
    w--;
    for (i=1;i<=n;i++) //làm nguoc lai o tren voi nua kim cuong con lai
	{
		for (j=1;j<=k;j++)
		{
			if (j == a) printf ("* ");
			if (((j == a-w) || (j==a+w) )&& (w!=0)) printf("* ");
			if (( (j> a-w && j<a ) || (j<a+w && j>a)) && (w!=0)) printf("  ");
			if (j==k) printf(". \n");
			else if ((j<a-w) || (j>a+w)) printf(". ");

		}
		w--;
	}
    return 0;
}

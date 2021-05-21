#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 2*n +1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j >= k-i+1 || j <= i)
            {
                printf("* ");
            }
            else printf(". ");
        }
        printf("\n");
    }
    for (int i = 1; i <= k; i++)
    {
        if (i ==k) printf("*\n");
        else printf("* ");
    }
    for (int i = 1; i <= n; i++)
    {
    	for (int j = 1; j <= k; j++)
    	{
    		if (  j <= n-i+1 || j >= n+i+1) printf("* ");
    		else printf(". ");
		}
		printf("\n");
	}
	return 0;

}

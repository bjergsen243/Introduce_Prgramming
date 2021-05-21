#include <math.h>
#include <stdio.h>
int giaithua(int n)
{
	if (n==0) return 1;
	else if (n==1) return 1;
	else return n*giaithua(n-1);
}
int main()
{
    float x;
    float s, sh;
    int k;
    scanf("%f",&x);
    s=0;sh=0; k=0;
    do
    {
    	sh = pow(x,k)/(giaithua(k));
    	s+=sh;
    	k++;

    }
    while(fabs(sh)>0.001);
    printf("%.4f", s);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *s0 = (char*) malloc(2);
	strcpy(s0, "a");
	char *s1 = (char*) malloc(2);
	strcpy(s1, "b");
	printf("f(0) = %s\n", s0);
	printf("f(1) = %s\n", s1);
	for (int i = 2; i <= 10; i++)
	{
		char *res = (char*) malloc (strlen(s0) + strlen(s1) + 1);
		strcpy(res, s1);
		strcat(res, s0);

		s0 = s1;
		s1 = res;
		printf("f(%d) = %s\n", i, res);
	}
    return 0;
}

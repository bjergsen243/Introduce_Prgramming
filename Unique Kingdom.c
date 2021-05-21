#include <stdio.h>
#include <string.h>

int main()
{
    // doan nhap nay copy lai tu bai finding nemo
    int n;
    scanf("%d", &n);
    int i = 0;
    char s[500][1000], c = ' ', x, k[1000];
    while (i < n)
    {
        strcpy(s[i], "");
        while (c == ' ')
        {
            scanf("%s", k);
            strcat(s[i],k);
            scanf("%c", &x);
            if (x == '\n') break;
            else if (x == ' ')
            {
                c = x;
                strcat(s[i], " ");
            }
        }
        i++;
    }
    i = 0;
    int idx[1000];
    for (int i = 0; i < n; i++)
    {
        idx[i] = -1;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i+1; j < n; j++)
        {
            if (strcmp(s[i], s[j]) == 0)
            {
                count++;
                idx[j] = 0;
                // de khong bi trung nhung phan tu phia sau
            }
        }
        if (idx[i] != 0)
        {
            idx[i] = count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (idx[i] == 1)
        {
            printf("%s\n", s[i]);
        }
    }
    return 0;
}

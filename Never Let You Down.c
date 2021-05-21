#include <stdio.h>
#include <malloc.h>
void sapxep(int x, int y, int *a, int *stt)
{
    int temp1, temp2;
    for (int i = x; i < y; i++){
        for (int j = i+1; j < y; j++){
            if (*(a+i) > *(a+j)){
                temp1 = *(a+i);
                temp2 = *(stt+i);
                *(a+i) = *(a+j);
                *(stt+i) = *(stt+j);
                *(a+j) = temp1;
                *(stt+j) = temp2;
            }
        }
    }
}
void sapxepgiongnhau(int x, int y, int *a, int *stt)
{
    int temp;
    for (int i = x; i < y; i++){
        for (int j = i+1; j < y; j++){
            if (*(a+i) == *(a+j) && *(stt+i) > *(stt+j)){
                temp = *(stt+i);
                *(stt+i) = *(stt+j);
                *(stt+j) = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int *stt = (int*) malloc(sizeof(int)*n);
    int *a = (int*) malloc(sizeof(int)*n);
    int chan = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", (a+i));
        *(stt+i) = i;
        if ((*(stt+i) +1)%2 == 0) chan++;
    }
    int temp1, temp2; // dao cac so co stt chan len dau
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (*(stt+i) % 2 == 0){
                temp1 = *(a+i);
                temp2 = *(stt+i);
                *(a+i) = *(a+j);
                *(stt+i) = *(stt+j);
                *(a+j) = temp1;
                *(stt+j) = temp2;
            }
        }
    }
    sapxep(0,chan, a, stt); // sap xep cac stt chan
    sapxep(chan, n, a, stt); // sap xep cac stt le
    sapxepgiongnhau(0,chan,a,stt); // sap xep cac so giong nhau (chan)
    sapxepgiongnhau(chan,n,a,stt); // sap xep giong nhau (le)
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(stt+i)+1);
    }
    return 0;
}

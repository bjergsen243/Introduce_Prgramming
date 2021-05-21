#include <stdio.h>
int main()
{
    int con, chan;
    // con là tổng số con gà và chó, chan là tổng số chân
    scanf("%d %d", &con, &chan);
    int conga, concho;
    if (chan % 2 != 0) printf("invalid");
    else
    {
        concho = (chan - 2*con )/2;
        conga = con - concho;
        printf("chicken = %d, dog = %d", conga, concho);
    }

    return 0;

}

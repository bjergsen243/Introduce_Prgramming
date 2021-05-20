#include <stdio.h>
int main()
{
    int tien, c;
    scanf("%d %c", &tien, &c);
    switch(c)
    {
    case 'C':
        {
            if (tien < 12000)
            {
                printf("Con thieu %d de mua Cocacola", 12000-tien);
            }
            else
            {
                printf("Cocacola %d", tien-12000);
            }
            break;
        }
    case 'P':
        {
            if (tien < 12000)
            {
                printf("Con thieu %d de mua Pepsi", 12000-tien);
            }
            else
            {
                printf("Pepsi %d", tien - 12000);
            }
            break;
        }
    case '7':
        {
            if (tien < 11000)
            {
                printf("Con thieu %d de mua 7up", 11000- tien);
            }
            else printf("7up %d", tien - 11000);
            break;
        }
    case 'S':
        {
            if (tien < 10000)
            {
                printf("Con thieu %d de mua Sprite", 10000- tien);
            }
            else printf("Sprite %d", tien - 10000);
            break;

        }
    case 'F':
        {
            if (tien < 7000)
            {
                printf("Con thieu %d de mua Fanta", 7000- tien);
            }
            else printf("Fanta %d", tien - 7000);
            break;
        }
    case 'L':
        {
            if (tien < 5000)
            {
                printf("Con thieu %d de mua Lavie", 5000- tien);
            }
            else printf("Lavie %d", tien - 5000);
            break;
        }
    default:
        {
            printf("%d", tien);
            break;
        }
    }
    return 0;
}

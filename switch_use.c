#include <stdio.h>

int main(int argc, char const *argv[])
{
    int month;

    printf("Which month is going on ( in numbers, 1 to 12 ) : ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("The month is January!");
        break;

    case 2:
        printf("The month is February!");
        break;

    case 3:
        printf("The month is March!");
        break;

    case 4:
        printf("The month is april!");
        break;

    case 5:
        printf("The month is May!");
        break;

    case 6:
        printf("The month is June!");
        break;

    case 7:
        printf("The month is July!");
        break;

    case 8:
        printf("The month is August!");
        break;

    case 9:
        printf("The month is September!");
        break;

    case 10:
        printf("The month is October!");
        break;

    case 11:
        printf("The month is November!");
        break;

    case 12:
        printf("The month is December!");
        break;

    default:
        printf("Write input only between 1-12, there are only 12 months in an year!");
        break;
    }

    return 0;
}

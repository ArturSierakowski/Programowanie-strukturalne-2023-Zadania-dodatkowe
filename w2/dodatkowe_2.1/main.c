#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf ("%d%d", &a, &b);
    int tmp = 0;

    while (a != 0)
    {
        tmp *= 10;
        tmp += a % 10;
        a /= 10;
    }
    while (b % 10 == 0)
        b /= 10;

    if (tmp == b)
        printf("lustrzane odbicia");
    else
        printf("nielustrzane odbicia");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int tmp = n;
    if (tmp < 0)
        tmp *= -1;
    int odb = 0;

    while (tmp != 0)
    {
        odb *= 10;
        odb += tmp % 10;
        tmp /= 10;
    }

    if (odb == n)
        printf("palindrom");
    else
        printf("niepalindrom");

    return 0;
}

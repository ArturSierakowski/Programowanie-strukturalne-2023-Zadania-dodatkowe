#include <stdio.h>
#include <stdlib.h>

void foo(int *wsk_n)
{
    int tmp = abs(*wsk_n);
    *wsk_n = 0;
    while (tmp != 0)
    {
        *wsk_n += tmp % 10;
        tmp /= 10;
    }
}

int main()
{
    int n = -291;
    foo(&n);
    printf("%d", n);

    return 0;
}

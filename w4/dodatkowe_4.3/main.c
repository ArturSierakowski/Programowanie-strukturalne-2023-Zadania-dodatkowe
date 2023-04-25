#include <stdio.h>
#include <stdlib.h>

void foo(int *wsk_a, int *wsk_b, int *wsk_c)
{
    int min, a = *wsk_a, b = *wsk_b;
    if (a >= b)
        min = b;
    else
        min = a;
    *wsk_c = min;
}

int main()
{
    int a = 3, b = -1, c;
    foo(&a, &b, &c);
    printf("%d %d %d", a, b, c);

    return 0;
}

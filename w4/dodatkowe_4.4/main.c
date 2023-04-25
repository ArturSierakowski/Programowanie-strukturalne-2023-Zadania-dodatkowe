#include <stdio.h>
#include <stdlib.h>

int *foo(int *wsk_a, int *wsk_b)
{
    int *wsk_suma = malloc(sizeof(int));
    *wsk_suma = *wsk_a + *wsk_b;
    return wsk_suma;
}

int main()
{
    int a = 5, b = 6;
    printf("%d", *foo(&a, &b));

    return 0;
}

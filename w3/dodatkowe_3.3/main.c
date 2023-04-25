#include <stdio.h>
#include <stdlib.h>

int foo(int pierwsza, int ostatnia)
{
    if (pierwsza > ostatnia)
        return 0;
    return foo(pierwsza, ostatnia - 1);
}

int main()
{
    int pierwsza = 1;
    int ostatnia = 100;

    int suma = foo(pierwsza, ostatnia);
    printf("%d", suma);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int foo(int pierwsza, int ostatnia)
{
    if (pierwsza > ostatnia)
        return 0;
    else if (pierwsza % 2 == 0)
        return foo(pierwsza + 1, ostatnia);
    else
        return pierwsza + foo(pierwsza + 2, ostatnia);
}

int main()
{
    int pierwsza = 11;
    int ostatnia = 67;
    int suma = foo(pierwsza, ostatnia);
    printf("%d", suma);

    return 0;
}

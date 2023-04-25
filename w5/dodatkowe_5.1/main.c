#include <stdio.h>
#include <stdlib.h>

double foo1(double x)
{
    return x * x;
}

double foo2(double x)
{
    return 2 * x;
}

double roznica(double (*f1)(double), double (*f2)(double), double x)
{
    return f1(x) - f2(x);
}

int main()
{
    printf("%.2lf\n", roznica(&foo1, &foo2, 3.2));
    printf("%.2lf\n", roznica(&foo1, &foo2, 0.5));

    return 0;
}

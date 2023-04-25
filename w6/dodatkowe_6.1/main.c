#include <stdio.h>
#include <stdlib.h>

int funkcja(int n, int *tab)
{
    int ilosc = 0;
    for (int i = 1; i < n; i++)
    {
        if ((tab[i] < 0 && tab[i - 1] >= 0) || (tab[i] >= 0 && tab[i - 1] < 0))
            ilosc++;
    }
    return ilosc;
}

int main()
{
    int tab1[] = {1, -3, -4, 0, 5};
    printf("%d\n", funkcja(5, tab1));

    int tab2[] = {-3, -11, -2};
    printf("%d\n", funkcja(3, tab2));

    int tab3[] = {2, 3, 3, -3, -4, -11};
    printf("%d\n", funkcja(6, tab3));

    return 0;
}

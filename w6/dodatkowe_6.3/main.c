#include <stdio.h>
#include <stdlib.h>

void sort(int *tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = tab[i];
        int id_min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (tab[j] < min)
            {
                min = tab[j];
                id_min = j;
            }
        }
        int tmp = tab[i];
        tab[i] = min;
        tab[id_min] = tmp;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

double find_median(int *tab, int n)
{
    sort(tab, n);
    if (n % 2 != 0)
        return tab[n/2];
    return tab[n/2] + tab[n/2 - 1];
}

int main()
{
    int tab1[] = {5, 8, -1, 6, 6, 1, 10};
    printf("%.2lf\n", find_median(tab1, 7));

    int tab2[] = {5, 8, -1, 6, 6, 1};
    printf("%.2lf\n", find_median(tab2, 6));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void find_longest_subsequence(int *tab, int n)
{
    int dlugosc = 1;
    int tmp = 1;
    for (int i = 1; i < n; i++)
    {
        if (tab[i] > tab[i - 1])
        {
            tmp++;
            if (tmp > dlugosc)
                dlugosc = tmp;
        }
        else
            tmp = 1;
    }
    printf("%d\n", dlugosc);
}

int main()
{
    int tab1[] = {-2, 2, 3, -1, 2};
    find_longest_subsequence(tab1, 6);

    int tab2[] = {-1, 2, 4, 6, 2};
    find_longest_subsequence(tab2, 5);

    return 0;
}

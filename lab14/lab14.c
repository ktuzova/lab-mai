#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    scanf("%d",&size);
    int matr[8][8];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matr[i][j]);
        }
    }
    int i1, i0, j0, di, dj, ii, jj, i, j, k1;
    k1 = size - 1;
    i0 = 0;
    j0 = 0;
    di = 1;
    dj = 1;
    for (i = i0; i <= k1; i = i + di)
    {
        ii = i;
        for (j = j0; j <= i; j = j + dj)
        {
            printf("%d ", matr[ii][j]);
            ii = ii - 1;
        }
    }
    j = j - k1;
    for (; j <= k1; j = j + dj)
    {
        jj = j;
        for (i = k1; i >= j; i = i - di)
        {
            printf("%d ", matr[i][jj]);
            jj = jj + 1;
        }
    }
    return 0;
}

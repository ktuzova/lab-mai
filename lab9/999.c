#include <stdio.h>
#include <stdlib.h>
int mod(int a, int b) {
    if (a < 0) {
        return (-1) * ((-1) * a % b);
    }
    return a % b;
}
int min(int a, int b) {
    if (a > b) {
        return b;
    }
    return a;
}
int max(int a, int b) {
    if (a < b) {
        return b;
    }
    return a;
}
int main()
{
    int i = -22;
    int j = 14;
    int l = -14;
    int k = 0;
    int new_i;
    int new_j;
    int new_l;
    while ((k <= 50) || ((j <= -10 - i) && (j >= -20 - i))) {
        new_i = mod((i * min(j, l) + j * min(i, l) + k * k), 20);
        new_j = mod(((mod(i, 10) - k) * (mod(j, 10) + k) * (mod(l, 10) - k)), 25);
        new_l = max(mod(min(i + j, i + l), 25), mod(max(i + l, j + k), 20)) + 10;
        i = new_i;
        j = new_j;
        l = new_l;
        k++;
    }
    if (k <= 50) {
        printf("\ninside\n");
    }
    else {
        printf("\noutside\n");
    }
    printf("final parameters(i,j,l,k) are %d, %d, %d, %d\n", i, j, l, k);
    return 0;
}

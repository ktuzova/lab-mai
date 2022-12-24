
#include <stdio.h>
#include <stdlib.h>
struct Matrix {
    int** table;
    int size[2];
};
struct Matrix createMatrix(int n, int m) { 
    struct Matrix matrix;
    matrix.size[0] = n; 
    matrix.size[1] = m;

    int** rows = malloc(n * m); 
    for(int i = 0; i < n; i++) {
        int* row = malloc(m);
        for(int i = 0; i < m; i++) {
            row[i] = 0; }
        rows[i] = row;
    }
    matrix.table = rows;
    return matrix;
}
struct Matrix transpose(struct Matrix matr) { 
    struct Matrix transposed = createMatrix(matr.size[1], matr.size[0]);

    for(int i = 0; i < matr.size[0]; i++) { 
        for(int j = 0; j < matr.size[1]; j++)
            transposed.table[j][i] = matr.table[i][j];
    }
    return transposed;
}
struct Matrix reverse(struct Matrix matr) { 
    struct Matrix reversed = createMatrix(matr.size[0], matr.size[1]);
    for(int i = 0; i < matr.size[0]; i++)
        reversed.table[i] = matr.table[matr.size[1] - 1 - i];

    return reversed;
}
void printMatrix(struct Matrix matr, int N){
    
    for(int i = 0; i < N; i++) { 
        for(int j = 0; j < N; j++) {
            printf("%d ", matr.table[i][j]);
        }
        printf("\n");
    }
}
int main(int argc, char* argv[]) {
    int N;
    scanf("%d", &N);
    struct Matrix matr = createMatrix(N, N);
    for(int i = 0; i < N; i++) { 
        for(int j = 0; j < N; j++) {
            scanf("%d", &matr.table[i][j]);
        }
    }
    printf("\n\n------ \n");
    printMatrix(transpose(reverse(matr)),N);
    for(int i = 0; i < matr.size[1]; i++) 
        free(matr.table[i]);
    free(matr.table);
    return 0;
}

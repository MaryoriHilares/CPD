#include <stdio.h>

#define FILAS_MATRIZ_B 3
#define COLUMNAS_MATRIZ_B 2
#define FILAS_MATRIZ_A 3
#define COLUMNAS_MATRIZ_A 3


int main(void) {

    int matrizA[FILAS_MATRIZ_A][COLUMNAS_MATRIZ_A] = {
            {3, 2, 1},
            {1, 1, 3},
            {0, 2, 1},
    };
    int matrizB[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B] = {
            {2, 1},
            {1, 0},
            {3, 2},
    };

    if (COLUMNAS_MATRIZ_A != FILAS_MATRIZ_B) {
        printf("Columnas de matriz A deben ser igual a filas de matriz B");
        return 0;
    }
    //Lugar en donde se almacena el resultado
    int producto[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B];

    for (int a = 0; a < COLUMNAS_MATRIZ_B; a++) {
        for (int i = 0; i < FILAS_MATRIZ_A; i++) {
            int suma = 0;
            for (int j = 0; j < COLUMNAS_MATRIZ_A; j++) {
                suma += matrizA[i][j] * matrizB[j][a];
            }
            producto[i][a] = suma;
        }
    }

    printf("Imprimiendo producto\n");
    for (int i = 0; i < FILAS_MATRIZ_B; i++) {
        for (int j = 0; j < COLUMNAS_MATRIZ_B; j++) {
            printf("%d ", producto[i][j]);
        }
        printf("\n");
    }
}

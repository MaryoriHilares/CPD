#include <stdio.h>
#include <sys/time.h>



int main(void) {

    for(int i=0; i<=400; i+=20){
        struct timeval tv1, tv2;
        struct timezone tz;
        double elapsed;

        int FILAS_MATRIZ_B =i;
        int COLUMNAS_MATRIZ_B =i;
        int FILAS_MATRIZ_A =i;
        int COLUMNAS_MATRIZ_A =i;
         int matrizA[FILAS_MATRIZ_A][COLUMNAS_MATRIZ_A];
         int matrizB[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B] ;
    
         if (COLUMNAS_MATRIZ_A != FILAS_MATRIZ_B) {
             printf("Columnas de matriz A deben ser igual a filas de matriz B");
             return 0;
         }
         //Lugar en donde se almacena el resultado
         int producto[FILAS_MATRIZ_B][COLUMNAS_MATRIZ_B];
        gettimeofday(&tv1, &tz);
        //multiplicacion clasica
         for (int a = 0; a < COLUMNAS_MATRIZ_B; a++) {
             for (int i = 0; i < FILAS_MATRIZ_A; i++) {
                 int suma = 0;
                 for (int j = 0; j < COLUMNAS_MATRIZ_A; j++) {
                     suma += matrizA[i][j] * matrizB[j][a];
                 }
                 producto[i][a] = suma;
             }
         }
         gettimeofday(&tv2, &tz);
         elapsed = (double) (tv2.tv_sec-tv1.tv_sec) + (double) (tv2.tv_usec-tv1.tv_usec) * 1.e-6;
        printf("%lf \n",elapsed);

    }

}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    // Declaração de uma matriz 3x3 (3 linhas e 3 colunas)
    int matriz1 [2][2];
    int matriz2 [2][2];
    
    int i, j;

    // Inicialização da matriz
   
    matriz1[0][0] = 1;
    matriz1[0][1] = 2;
    matriz1[0][2] = 3;
    matriz1[1][0] = 4;
    matriz2[1][1] = 5;
    matriz2[1][2] = 6;
    matriz2[2][0] = 7;
    matriz2[2][1] = 8;
    

    printf("matriz1:\n");
    printf("matriz2:\n");

    // Loop para percorrer as linhas da matriz
    for (i = 0; i < 3; i++) {
        // Loop para percorrer as colunas da matriz
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz1[i][j]); // Imprime o elemento e um tab
        printf("%d\t", matriz2[i][j]); 
            
        }
        printf("\n"); // Muda de linha após cada linha da matriz
    }

    return 0;
}
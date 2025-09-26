#include <stdio.h>
#include <stdlib.h>

/*Aula 197: Alocação dinamica de memoria com a função malloc
    retorna um ponteiro para a região da memora alocada ou NUll
*/
int main() {
    int *x;
    x = malloc(sizeof(int));

    if (x){
        printf("Memoria alocada com sucesso\n");
        printf("x: %d\n", x);
        *x = 50;
        printf("x: %d\n",*x);
    }
    return 0;
}
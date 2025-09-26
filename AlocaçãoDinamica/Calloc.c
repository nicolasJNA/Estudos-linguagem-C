#include <stdio.h>
#include <stdlib.h>

/*Aula 197: Alocação dinamica de memoria com a função calloc
*/
int main() {
    int *x;
    //x = malloc(sizeof(int));
    // aloca memoria e é possivel definir a quantidade de elementos que quer alocar memoria
    x = calloc(1,sizeof(int));
    if (x){
        printf("Memoria alocada com sucesso\n");
        printf("x: %d\n", x);
        *x = 50;
        printf("x: %d\n",*x);
    }else{
        printf("Erro de alocar memoria!\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

typedef struct{
    int idade;
    int altura;
    char nome[20];
}Pessoa;


int main(){

    Pessoa vinicius;
    vinicius.idade = 21;
    strcpy(vinicius.nome,"Vinicus");
    printf("Ola %s voce tem %i anos\n", vinicius.nome, vinicius.idade);

    return 0;
}
#include<stdio.h>
#include<string.h>
//

int idade2 = 35; // variavel global

void imprimir(int id){
    printf("Idade %d", id);
}

int main(){
    int idade = 21;

    printf("\nIdade: %d", idade);
    imprimir(idade);

    return 0;
}
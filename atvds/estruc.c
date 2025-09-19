#include <stdio.h>

typedef struct estruc
{
    int idade;
    char nome[10];
}Pessoa;

int main(){
    Pessoa aluno;
    aluno.idade = 10;
    strcpy(aluno.nome,"nicolas");
    printf("O aluno %s tem idade %d",aluno.nome, aluno.idade);
    return 0;
}
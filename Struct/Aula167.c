#include<stdio.h>
#include<string.h>

typedef struct{
    int idade;
    int ano;
}Ano;
typedef struct{
    Ano nascimento;
    char nome[10];
    char sexo;
}Pessoa;
int main (){
    Pessoa aluno;
    printf("Infome o seu nome: ");
    fgets(aluno.nome,10,stdin);
    printf("Informe a seu sexo: "); 
    scanf("%d",&aluno.sexo);
     printf("Informe a sua idade: "); 
     scanf("%c");
    scanf("%d",&aluno.nascimento.idade);
    if(aluno.nascimento.idade > 18){
        printf("Seja bem vindo %s.Você tem %d anos e cumpre a idade minima permitida",
        aluno.nome,aluno.nascimento.idade);
    }else{
        printf("Infelizmente, você não pode entrar");
    }
    return 0;
}
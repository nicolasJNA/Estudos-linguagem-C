#include<stdio.h>
#include<string.h>
// Função que recebe uma struct como parametro
typedef struct{
    int dia,mes,ano;
}DataNas;
typedef struct{
    DataNas data;
    char nome[50];
    char sexo;
    int idade;
}Pessoa;

void imprimirPessoa(Pessoa p){
    printf("Nome: %s",p.nome);    
    printf("\nIdade: %d", p.idade);
    printf("\nSexo: %c",p.sexo);
    printf("\nData de nas: %d/%d/%d", p.data.dia,p.data.mes,p.data.ano);
}

int main (){
    Pessoa aluno;
    printf("Infome o seu nome: ");
    fgets(aluno.nome,10,stdin);
    printf("Informe a sua idade: ");
    scanf("%d",&aluno.idade);
    //while(getchar() != '\n');
    
getchar();

    printf("Informe a nseu sexo: "); 
    scanf("%c",&aluno.sexo);

    printf("Informe sua data de nascimento: ");
    scanf("%d%d%d",&aluno.data.dia,&aluno.data.mes,&aluno.data.ano);
    imprimirPessoa(aluno);
    return 0;
}
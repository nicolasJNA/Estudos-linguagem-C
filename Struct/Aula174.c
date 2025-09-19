#include<stdio.h>
#include<string.h>

//  Função que retorna uma struct 

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

Pessoa lerPessoa(){
    Pessoa p;
    printf("Infome o seu nome: ");
    fgets(p.nome,10,stdin);
    printf("Informe a sua idade: ");
    scanf("%d",&p.idade);
    //while(getchar() != '\n');
    
getchar();

    printf("Informe a nseu sexo: "); 
    scanf("%c",&p.sexo);

    printf("Informe sua data de nascimento: ");
    scanf("%d%d%d",&p.data.dia,&p.data.mes,&p.data.ano);

    return p;
}

int main (){
    Pessoa pessoa;
    pessoa = lerPessoa();
    imprimirPessoa(pessoa);
    return 0;
}
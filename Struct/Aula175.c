#include<stdio.h>
#include<string.h>

//  Struct com vetor 

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
getchar();
    return p;
}

int main (){
    Pessoa pessoa[3];
    for(int i= 0; i<3;i++){
        pessoa[i] = lerPessoa();
    }
    for(int i = 0;i<3;i++){
    imprimirPessoa(pessoa[i]);
    }
    return 0;
}
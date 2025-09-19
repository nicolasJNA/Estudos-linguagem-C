#include<stdio.h>
#include<string.h>

//criar um tipo eletronico
typedef struct{
    char tipo[50];
    char marca[30];
    char modelo[25];
    char energia;
    char descricao[500];
    int quantidade;
    int codigo;
}Eletronico;

void imprimirEletronico(Eletronico e){
    printf("\tTipo: %s",e.tipo);
    printf("\tMarca: %s", e.marca);
    printf("\tModelo: %s",e.modelo);
    printf("\tEnergia: %c\n",e.energia);
    printf("\tDescrição: %s",e.descricao);
}

Eletronico lereletronico(){
    Eletronico e;
    printf("\tTipo: ");
    fgets(e.tipo,50,stdin);
    printf("\tMarca: ");
    fgets(e.marca,30,stdin);
    printf("\tModelo: ");
    fgets(e.modelo,20,stdin);
    printf("\tEnergia: ");
    scanf("%c",&e.energia);
    getchar();
    printf("\tDescrição: ");
    fgets(e.descricao,100,stdin);
    printf("QUnatidade e codigo: ");
    scanf("%d%d",&e.quantidade, &e.codigo);
    return e;
}

int main (){
    Eletronico eletro;
    eletro = lereletronico();
    imprimirEletronico(eletro);

    return 0;
}
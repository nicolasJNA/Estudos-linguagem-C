#include<stdio.h>
#include<string.h>
//  Aula 138: Matriz com string
int main(){

    char nomes[5][25];
    int l;
    for (l=0;l< 5; l++){
        printf("Digite o nome da posição %d: ",l);
        fgets(nomes[l],25,stdin);
    }
    for(l=0;l<5;l++){
        printf("%s",nomes[l]);
    }
    return 0;
}
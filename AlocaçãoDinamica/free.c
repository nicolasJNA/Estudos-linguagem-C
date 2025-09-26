#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//  Aula 202: liberação de memoria 
// uso da função free para liberar uma memoria alocada
int main() {
    int *vet, tam,i;
    srand(time(NULL));
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    // vet = tam * malloc(sizeof(int));
    vet = calloc(tam,sizeof(int));
if(vet){
    for(i = 0; i < tam; i++){
        *(vet + i) = rand() % 100;
    }
     for(i = 0; i < tam; i++){
        printf("%d ", *(vet + i));
    }
}else{
    printf("\nErro ao alocar memoria");
}
free(vet);
printf("\n\nMemoria liberada: ");
for(i = 0; i < tam; i++){
        printf("%d ", *(vet + i));
    }
    return 0;
}
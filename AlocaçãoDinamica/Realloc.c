#include <stdio.h>
#include <stdlib.h>
#include<time.h>

//  Aula 200: Como realocar a memoria

int main() {
    int *vet, tam,i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    srand(time(NULL));
    // vet = tam * malloc(sizeof(int));
    vet = calloc(tam,sizeof(int));
if(vet){
    for(i = 0; i < tam; i++){
        *(vet + i) = rand() % 100;
    }
     for(i = 0; i < tam; i++){
        printf("%iº: %p\n",i, (vet + i));
    }
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    printf("\n\n");
    vet = realloc(vet, tam);
       for(i = 0; i < tam; i++){
        printf("%iº: %p\n",i, (vet + i));
    }

}else{
    printf("\nErro ao alocar memoria");
}

    return 0;
}
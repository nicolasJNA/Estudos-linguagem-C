#include<stdio.h>
#include<stdlib.h>

// Vetor é sempre um ponteiro??? 
void imprimirVet(int vet[], int tam){
    int i;
    for(i =0; i< tam; i++)
        printf("%d ",*(vet + i));
    printf("\n");
}
/*  */
int main(){
int vetor[10] = {5,6,3,2,32,26,56,9,11,20};
imprimirVet(vetor,10);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Descobrir(int *vet, int tam, int *menor, int *maior){
    int me = *vet, i, ma = *vet, id;
    for(int a = 0; a < tam; a++){
        if(me > *(vet + a)){
            me = *(vet + a);
            i = a;
        }
        if(ma < *(vet + a)){
            ma = *(vet + a);
            id = a;
        }
    }
    *menor = me;
    *maior = ma;
}
int main() {
    int vetor[10];
    int menor, maior;
    srand(time(NULL));
    for (int a = 0; a<10;a++){
        vetor[a] = rand() % 100;
    }
    for(int a = 0;a<10;a++){
        printf("%d ", vetor[a]);
    }
    Descobrir(vetor,10,&menor,&maior);
    printf("\nMaior: %d menor: %d\n",maior,menor);
    return 0;
}
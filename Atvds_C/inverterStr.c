#include <stdio.h>
#include <stdlib.h>
void inverter(char *vet){
    int i=0;
    while (*(vet+i) != '\0'){
        i = i+1;
    }
    for(int j = i; j > 0; j-- ){
        printf("%c",*(vet + j));
    }
}
int main() {
    char *nome;
    nome = malloc(20 * sizeof(char));
    printf("Diga uma palavra para invertermos: ");
    scanf("%s", nome);
    inverter(nome);  
    return 0;
}
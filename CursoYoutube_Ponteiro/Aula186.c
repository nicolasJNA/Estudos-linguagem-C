#include<stdio.h>
// Pq não usamos & ao ler uma string numa função scanf?

int main(){
    char palavra[100]= "BOMDIA";
    // scanf("%100[^\n]",palavra);
    // printf("%s\n",palavra);

    printf("%p", palavra);
    printf("\n%p", &palavra);
    printf("\n%p", palavra[1]);
    return 0;
}
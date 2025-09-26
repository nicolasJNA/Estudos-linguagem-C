#include <stdio.h>
#include <stdlib.h>

// ponteiro para ponteiro

int main() {
    int a = 100, *b, **c;
    c = &b;
    b = &a;
    printf("Endereço de a: %p", &a);
    printf("\tConteudo de a: %d", a);
    printf("\nEndereço de B: %p\tconteudo de B: %p", &b,b);
    printf("\nConteudo apontado por B: %d\n", *b);
    printf("\nEndereço de c: %p\tconteudo de c: %p", &c,c);
    printf("\nConteudo apontado por c: %d\n", **c);
    return 0;
}
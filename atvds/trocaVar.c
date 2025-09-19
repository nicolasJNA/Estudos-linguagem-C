#include <stdio.h>

int main (){
    int a = 10, b = 5;
    int c = 0;
    printf("A = %d\nB = %d\n", a , b);
    printf("Novo valor\n");
    c = a;
    a = b;
    b = c;
    printf("A = %d\nB = %d\n", a , b);
    return 0;
}
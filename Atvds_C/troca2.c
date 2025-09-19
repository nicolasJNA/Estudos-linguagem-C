#include <stdio.h>

int main (){
    int a = 20, b = 5;
    printf("A = %d\nB = %d\n", a , b);
    printf("Novo valor\n");
     a = a*b ;
     b = a/b;
     a = a/b;
    printf("A = %d\nB = %d\n", a , b);
    return 0;
}
//1
#include <stdio.h>

int main() {
    int x = 10;
    int *p;

    p = &x; 

    printf("Endereco de x: %p\n", (void*)&x);

    printf("Valor de x usando p: %d\n", *p);

    printf("Endereco armazenado em p: %p\n", (void*)p);

    return 0;
}

//2


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
#include <stdio.h>

int main() {

    int a = 5, b = 15;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    printf("Antes:\n");
    printf("A: %d \t\t B: %d\n", a, b);

    *p1 = 100;
    *p2 = 200;

    printf("Depois:\n");
    printf("A: %d \t\t B: %d\n", a, b);

    return 0;
}

//3 
#include <stdio.h>

int main() {

    float v1, v2, soma;
    float *p1, *p2;

    p1 = &v1;
    p2 = &v2;

    printf("Informe o primeiro valor: ");
    scanf("%f", &v1);

    printf("Informe o segundo valor: ");
    scanf("%f", &v2);

    soma = *p1 + *p2;

    printf("Soma = %.2f\n", soma);

    return 0;
}

//4
#include <stdio.h>

void eleva_ao_quadrado(int *n);

int main() { 
    int valor = 6;

    printf("Valor antes da função: %d\n", valor);
    
    eleva_ao_quadrado(&valor);

    printf("Valor depois da função: %d\n", valor);

    return 0;
}

void eleva_ao_quadrado(int *n){
    *n = (*n) * (*n);
}

//5

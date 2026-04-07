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
#include <stdio.h>

void troca(int *a, int *b);

int main() { 
    
    int x = 10, y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    troca(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//6
#include <stdio.h>

void divisao(int dividendo, int divisor, int *quociente, int *resto);

int main() {
    int dividendo, divisor;
    int quociente, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Erro: divisao por zero nao eh permitida.\n");
    } else {
        divisao(dividendo, divisor, &quociente, &resto);

        printf("Quociente = %d\n", quociente);
        printf("Resto = %d\n", resto);
    }

    return 0;
}

void divisao(int dividendo, int divisor, int *quociente, int *resto) {
    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;
}

//7
#include <stdio.h>

void maior(int *p1, int *p2, int **pMaior);

int main() {
    int a, b;
    int *resultado;  

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    maior(&a, &b, &resultado);

    printf("Maior valor = %d\n", *resultado);
    printf("Endereco do maior valor = %p\n", (void*)resultado);

    return 0;
}

void maior(int *p1, int *p2, int **pMaior) {
    if (*p1 > *p2) {
        *pMaior = p1;
    } else {
        *pMaior = p2;
    }
}

//8
#include <stdio.h>

int main() {
    char nome[] = "Ponteiros";
    char *p = nome;  

    while (*p != '\0') {
        printf("%c\n", *p);  
        p++;                 
    }

    return 0;
}

//9
#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Livro;

int main() {
    Livro meuLivro; 
    Livro *ptrLivro;     

    ptrLivro = &meuLivro;  

    ptrLivro->id = 101;
    ptrLivro->preco = 59.90;

    printf("ID do livro: %d\n", ptrLivro->id);
    printf("Preco do livro: %.2f\n", ptrLivro->preco);

    return 0;
}

//10
#include <stdio.h>

typedef struct {
    int pontos;
    int nivel;
} Jogador;

void ganhar_ponto(Jogador *j) {
    j->pontos += 1;  
    if (j->pontos >= 10) {
        j->nivel += 1;     
        j->pontos = 0;     
    }
}

int main() {
    Jogador jogador1 = {8, 1};  

    printf("Antes: Pontos = %d, Nivel = %d\n", jogador1.pontos, jogador1.nivel);

    ganhar_ponto(&jogador1); 
    printf("Depois de ganhar 1 ponto: Pontos = %d, Nivel = %d\n", jogador1.pontos, jogador1.nivel);

    ganhar_ponto(&jogador1);  
    printf("Depois de ganhar outro ponto: Pontos = %d, Nivel = %d\n", jogador1.pontos, jogador1.nivel);

    return 0;
}
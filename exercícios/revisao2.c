//Exercício 2: if-else if e scanf

//Requisitos:
//
//Declare uma variável inteira para armazenar uma nota de 0 a 100.
//
//Peça ao usuário para inserir a nota.
//
//Use uma estrutura if-else if-else para verificar a nota e imprimir um conceito:
//
//Se a nota for maior ou igual a 90, imprima "Conceito A".
//
//Se for maior ou igual a 80 e menor que 90, imprima "Conceito B".
//
//Se for maior ou igual a 70 e menor que 80, imprima "Conceito C".
//
//Em qualquer outro caso, imprima "Conceito D".


#include <stdio.h>

int main() {
    int nota;

    printf("Insira uma nota de 0 a 100\n");
    scanf("%d",&nota);

    if (nota>=90) {
        printf("Conceito A\n");
    } else if (nota >=80) {
        printf("Conceito B\n");
    } else if (nota >= 70) {
        printf("Conceito C\n");
    } else{
        printf("Conceito D");
    } return 0;
}

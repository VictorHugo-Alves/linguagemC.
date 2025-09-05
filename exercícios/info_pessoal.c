//Exercício 1: Informações Pessoais
//Crie um arquivo chamado info_pessoal.c na pasta exercicios.
//
//Requisitos:
//
//Declare as variáveis necessárias para armazenar a idade (número inteiro) e a inicial do nome (caractere).
//
//Peça ao usuário para inserir sua idade.
//
//Peça ao usuário para inserir a inicial do seu nome.
//
//Imprima uma frase que mostre a idade e a inicial digitadas.




#include <stdio.h>

int main() {
    int idade;
    char inicial;

    printf("Insira a sua idade");
    scanf("%d",&idade);

    printf("Insira a inicial do seu nome");
    scanf(" %c",&inicial);

    printf("Sua inicial é %d e a inicial do seu nome é %c",idade,inicial);
    return 0;
}

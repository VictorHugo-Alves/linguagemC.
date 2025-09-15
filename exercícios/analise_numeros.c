//Exercício: Analisando Números
//
//Requisitos:
//
//Declare uma variável inteira chamada numero e a inicialize com 0.
//
//Use um laço while para ler números inteiros do usuário. O laço deve continuar até que o usuário digite o número 10.
//
//Dentro do laço, use uma estrutura if para verificar se o número digitado é negativo. Se for, use o comando continue para pular para a próxima iteração, ignorando o restante do código dentro do laço.
//
//Se o número for o 10, use o comando break para sair do laço.
//
//Para todos os outros números (os positivos), imprima uma mensagem dizendo que o número é válido.

#include <stdio.h>

int main() {
    int num1 = 0;
    int num2;

    while (num2 != 10) {
        printf("Insira um número inteiro\n");
        scanf(" %d\n",&num2);
        if (num2) < 0 {
            printf("Inválido, insira um número inteiro POSITIVO"));
            continue;
        }
        printf("O número %d é válido",num2);
    } printf("Número 10 encontrado");
    return 0;
}




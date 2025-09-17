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

//TEM QUE FAZER AINDA

#include <stdio.h>

int main() {
    float num;
    while (1) {
        printf("Insira um número inteiro positivo\n");
        scanf("%f",&num);
        if (num == 10) {
            printf("Você encontrou o número, encerrando...\n");
            break;
        } else if (num < 0) {
            printf("Inválido! Número POSITIVO\n");
            continue;
        } else {
            printf("Continue tentando.\n");
        }

    } return 0;
}

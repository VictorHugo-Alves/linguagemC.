//Requisitos:
//
//Declare uma variável inteira para armazenar um número de 1 a 10.
//
//Peça ao usuário para inserir o número.
//
//Use um laço while para contar do 1 até o número que o usuário digitou.
//
//Dentro do laço, use um if para verificar se o número atual é igual a 5. Se for, use o comando break para sair do laço.
//
//Imprima a mensagem "Contagem finalizada!" após o laço.

#include <stdio.h>

int main() {
    int num;
    int init = 1;
    printf("Insira um número inteiro");
    scanf("%d",&num);
    while (1) {
        if (init == num) {
            printf("%d\n",init);
            printf("Contagem encerrada!");
            break;
        } printf("%d\n",init);
        init += 1;

    } return 0;
}

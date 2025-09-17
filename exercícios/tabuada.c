//Requisitos:
//
//Declare uma variável inteira para armazenar o número da tabuada.
//
//Peça ao usuário para inserir um número.
//
//Use um laço for para imprimir a tabuada completa desse número (de 1 a 10).
//
//A saída deve ser formatada para cada linha, como no exemplo:
//5 x 1 = 5
//5 x 2 = 10
//...
//5 x 10 = 50

#include <stdio.h>

int main() {
    int num;
    int i;

    printf("Insira um número de 1 a 10");
    scanf("%d",&num);
    if (num<=0) {
        printf("Insira um número válido");
    } else if (num > 10) {
        printf("Insira um número válido");
    } else {
        for (i=1;i<=10;i++) {
            printf("%d x %d = %d\n",num,i,(num*i));
        }
    } return 0;
}

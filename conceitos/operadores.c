// + adição
// - subtração
// * multiplicação
// / divisão
// % resto

#include <stdio.h>

int main() {
    //criando variaveis
    int num1 = 15;
    int num2 = 4;
    int resultado;

    //Printando as operações aritméticas
    resultado = num1 + num2;
    printf("Soma: %d\n", resultado);

    resultado = num1 - num2;
    printf("Subtração: %d\n",resultado);

    resultado = num1 * num2;
    printf("Multiplicação: %d\n",resultado);

    resultado = num1 / num2;
    printf("Divisão: %d\n", resultado);

    resultado = num1 % num2;
    printf("Resto da divisão: %d\n", resultado);

    //Valor de atribuição
    int x = 10;
    x += 5;
    printf("Soma de atribuição: %d\n",x);

    //Demonstrando incremento
    int y = 7;
    y--;
    printf("Subtração de incremento %d\n",y);

    return 0;
}

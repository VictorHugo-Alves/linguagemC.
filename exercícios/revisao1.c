//Exercício 1: Tipos de Dados e Operadores
//Crie um arquivo chamado revisao_1.c na sua pasta exercicios.
//
//Requisitos:
//
//Declare três variáveis: uma inteira (int), uma de ponto flutuante (float) e uma de caractere (char).
//
//Inicialize-as com valores à sua escolha.
//
//Imprima o valor de cada uma das variáveis em uma linha separada, usando os formatadores de saída corretos.
//
//Realize a soma da variável int com um número de sua escolha e imprima o resultado.
//
//Multiplique a variável float por 2 e imprima o resultado.
//
//Decremente a variável int em 1 e imprima seu novo valor.

#include <stdio.h>

int main() {
    int num1;
    float num2;
    char str;

    printf("Insira o valor inteiro para num1\n");
    scanf("%d",&num1);

    printf("Insira um valor decimal para num2\n");
    scanf(" %f",&num2);

    printf("Insira o texto da variavel str\n");
    scanf(" %c",&str);

    printf("%d\n%.2f\n%c\n",num1,num2,str);

    printf("%d + %d = %d\n",num1, 5, (num1+5));

    printf("%.2f x 2 = %.2f\n",num2,(num2*2));

    printf("%d\n",--num1);

    return 0;

}

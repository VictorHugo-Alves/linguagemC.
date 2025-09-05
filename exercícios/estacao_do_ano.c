//Exercício 2: Estação do Ano

//Declare uma variável para armazenar o número de um mês.
//
//Peça ao usuário para inserir um número de 1 a 12.
//
//Use uma estrutura de seleção para verificar o número do mês e, em seguida, imprima a estação do ano correspondente:
//
//Primavera: Meses 9, 10, 11
//
//Verão: Meses 12, 1, 2
//
//Outono: Meses 3, 4, 5
//
//Inverno: Meses 6, 7, 8
//
//Caso o número seja inválido, imprima uma mensagem de erro.

#include <stdio.h>

int main() {
    int mes;

    printf("Insira o número de um mês\n");
    scanf("%d",&mes);

    switch (mes) {
        case 1:
            printf("Estamos no Verão");
            break;
        case 2:
            printf("Estamos no Verão");
            break;
        case 12:
            printf("Estamos no Verão");
            break;
        case 3:
            printf("Estamos no Outono");
            break;
        case 4:
            printf("Estamos no Outono");
            break;
        case 5:
            printf("Estamos no Outono");
            break;
        case 6:
            printf("Estamos no Inverno");
            break;
        case 7:
            printf("Estamos no Inverno");
            break;
        case 8:
            printf("Estamos no Inverno");
            break;
        case 9:
            printf("Estamos na Primavera");
            break;
        case 10:
            printf("Estamos na Primavera");
            break;
        case 11:
            printf("Estamos na Primavera");
            break;
        default:
            printf("Número inválido! Tente novamente e insira um número entre 1 e 12.");
    } return 0;
}

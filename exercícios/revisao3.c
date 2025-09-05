//Exercício 3: Revisão com if-else
//
//Requisitos:
//
//Declare uma variável inteira para armazenar um ano.
//
//Peça ao usuário para inserir um ano.
//
//Use uma estrutura if-else if-else para verificar a década do ano.
//
//Se o ano estiver entre 1990 e 1999, imprima "Decada de 1990".
//
//Se o ano estiver entre 2000 e 2009, imprima "Decada de 2000".
//
//Se o ano estiver entre 2010 e 2019, imprima "Decada de 2010".
//
//Se o ano estiver entre 2020 e 2029, imprima "Decada de 2020".
//
//Se o ano for menor que 1990 ou maior que 2029, imprima "Decada fora do escopo.".

#include <stdio.h>

int main() {
    int ano;

    printf("Insira um ano\n");
    scanf("%d",&ano);

    if ((ano >= 1990) && (ano <=1999)) {
        printf("Década de 1990\n");
    } else if ((ano >= 2000) && (ano <= 2009)) {
        printf("Década de 2000\n");
    } else if ((ano >= 2010) && (ano <= 2019)) {
        printf("Década de 2010\n");
    } else if ((ano >= 2020) && (ano <= 2029)) {
        printf("Década de 2020\n");
    } else {
        printf("Década fora do escopo");
    } return 0;
}

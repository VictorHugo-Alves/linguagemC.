//Requisitos:
//
//Declare uma variável inteira para armazenar o número de termos que o usuário quer somar.
//
//Peça ao usuário para inserir o número de termos (por exemplo, se o usuário digitar 5, o programa deve somar os 5 próximos números).
//
//Use um laço for para ler os números um por um e somá-los.
//
//Após o laço, imprima o resultado da soma.

#include <stdio.h>

int main() {
    int i;
    int termos;
    int num;
    int soma = 0;

    printf("Quantos termos você quer somar?\n");
    scanf("%d",&termos);

    for (i = 1; i<=termos; i++) {
        printf("Digite o %d° termo\n",i);
        scanf("%d",&num);
        soma += num;
    } printf("A soma dos termos é %d",soma);
    return 0;
}

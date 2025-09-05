#include <stdio.h>

int main() {
	int num1;
	int num2;
	char operador;

	printf("Digite um número inteiro:\n");
	scanf("%d",&num1);

	printf("Escolha um operador(+,-,*,/)\n");
	scanf(" %c",&operador);

	printf("Digite o segundo número inteiro\n");
	scanf("%d",&num2);


switch (operador) {
	case '+':
		printf("%d",num1+num2);
		break;
	case '-':
		printf("%d",num1-num2);
		break;
	case '*':
		printf("%d",num1*num2);
		break;
	case '/':
		printf("%d",num1/num2);
		break;
	default:
		printf("Operador inválido");
	} return 0;
}

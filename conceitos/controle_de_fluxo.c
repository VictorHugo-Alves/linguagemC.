//if
//elif
//else if

//if condicao {
//    ...
//} else if condicao {
//    ...
//} else if condicao {
//    ...
//} else condicao {
//    ...
//};


#include <stdio.h>

int main() {
    int idade = 21;
    if (idade>=18) {
        printf("Você é maior de idade");
    } else if (12 <= idade) {
        printf("Você é um adolescente");
    } else {
        printf("Você é uma criança.");
    }

    return 0;
}

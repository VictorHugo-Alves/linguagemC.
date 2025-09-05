#include <stdio.h>

//Operadores relacionais

// == igual a
// != diferente de
// > maior que
// < menor que
// >= maior ou igual a
// <= menor ou igual a

//Retorna 1 para true e 0 para false

//Operadores lógicos

//&& and
//|| or
//! not



int main() {
    int a = 5, b = 10;
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    printf("%d\n",a>b);
    printf("%d\n",a<b);
    printf("%d\n",a>=b);
    printf("%d\n",a<=b);
    printf("%d\n",(a>5 && b<25));
    printf("%d\n",(a<5 || b > 15));
    printf("%d\n",!(a == 5));

    return 0;
}

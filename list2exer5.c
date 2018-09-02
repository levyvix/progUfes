/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valor;
    printf("digite o valor do produto: ");
    scanf("%f",&valor);

    if(valor < 20){
        printf("Valor da venda: R$%.2f", valor*1.45);
    }else{
        printf("valor da venda: R$%.2f",valor*1.30);
    }
    return 0;
}

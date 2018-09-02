/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valor,total;
    printf("Digite o salario: ");
    scanf("%f", &valor);
    printf("Digite o total vendido: ");
    scanf("%f", &total);
    

    if(total>valor){
        printf("Total vendido maior que o salario do vendedor!\nReajuste: %.2f", valor*1.08);
    }
    
    return 0;
}

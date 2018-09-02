/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Digite um numero");
    scanf("%d", &n);
    
    if(n>0){
        printf("%d e Positivo\n", n);
    }else{
        printf("%d e Negativo\n",n);
    }

    return 0;
}

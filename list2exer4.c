/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float dist, tempo,vm;
    printf("Digite a distantancia em km: ");
    scanf("%f", &dist);
    printf("Digite o tempo em horas: ");
    scanf("%f", &tempo);
    
    if(dist/tempo > 110){
        printf("Velocidade media superior ao limite\n");
    }else{
        printf("Velocidade media inferior ao limite\n");
    }

    return 0;
}

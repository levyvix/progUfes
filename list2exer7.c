/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite sua idade: ");
    scanf("%d", &n);

    if (n >=10 && n  <=14){
        printf("Infantil\n");
    }else if (n >=15 && n<=17){
        printf("Juvenil\n");
    }else if(n >=18 && n<=25){
        printf("Adulto\n");
    }
    return 0;
}

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

    if (n >= 18 && n<=67 ){
        printf("Voce pode doar sangue!\n");
    }else{
        printf("Voce nao pode doar sangue!\n");
    }
    return 0;
}

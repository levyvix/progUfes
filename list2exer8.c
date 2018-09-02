#include <stdio.h>

int main()
{
    int n;
    printf("Digite sua temperatura: ");
    scanf("%d", &n);

    if (n<37){
        printf("Sem febre\n");
    }else if (n <39 && n>=37){
        printf("Febril\n");
    }else if(n >=39){
        printf("Febre Alta\n");
    }
    return 0;
}

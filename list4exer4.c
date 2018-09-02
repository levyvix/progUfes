#include<stdio.h>

int main(){
    int n,par=0,x=0,primo=0;
    do{
        x=0;
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n%2==0){
            par++;
        }
        for(int i=1;i<=n;i++){
            if(n%i==0){
                x++;
            }
        }
        if(x == 2){
            primo=2;
        }
    }while(primo!=2);

    printf("\nVoce digitou um numero primo!\n");
    printf("Soma dos Pares: %d", par);
    return 0;
}


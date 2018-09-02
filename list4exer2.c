#include<stdio.h>

int main(){

    int n,aux=0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if(n%i==0){
            aux++;
        }
    }

    if(aux > 2){
        printf("numero n e primo\n");
    }else{
        printf("numero e primo\n");
    }

    return 0;
}


#include<stdio.h>

int main(){

    int n,num,menor=9999999,maior=0;

    printf("Digite um numero >=2: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if(num < menor){ 
            menor = num;
        }
        if(num > maior){
            maior = num;
        }
    }

    printf("\nMenor valor: %d\nMaior valor: %d\n",menor, maior);
}




#include<stdio.h>

int main()
{
    int n,maior,num;

    printf("Digite um numero >=2: ");
    scanf("%d",&n);
    
    maior=0;
    for(int i=1;i<=n;i++){
        printf("numero: ");
        scanf("%d",&num);

        if(num > maior){
            maior = num;
        }
    }

    printf("Maior Valor: %d\n",maior);
}



#include<stdio.h>
#include<math.h>

int main(){
    int n;
    float x,somaX=0;

    printf("digite um numero: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        x = pow(n,i-1)/(n+i);
        printf("%.2f ", x);
        somaX += x;
    }
    printf("\nSoma dos termos da serie: %.2f\n",somaX);
}


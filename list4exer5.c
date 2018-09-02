#include<stdio.h>

int main(){
    int n;
    float sal,ab,total=0;
    printf("digite o numero de funcionarios: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("digite o salario do %d funcionario: ",i+1);
        scanf("%f",&sal);
        if(sal >= 5000){
            ab=sal*.05;
            printf("Abono salarial: R$%.2f\n",ab);
            total+=ab;
        }else if(sal < 5000 && sal>=2000){
            ab=sal*.1;
            printf("Abono salarial: R$%.2f\n",ab);
            total+=ab;
        }else{
            ab=sal*.15;
            printf("Abono salarial: R$%.2f\n",ab);
            total+=ab;
        }
    }
    printf("\nTotal de Abono a ser concedido: R$%.2f\n",total);
}



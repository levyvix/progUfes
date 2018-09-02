#include <stdio.h>

int main(){
    int n;
    printf("digite o numero de alunos: ");
    scanf("%d",&n);
    float maior,media=0,media2=0,n1,n2,n3;

    for(int i = 1;i<=n;i++){
        printf("Digite as 3 notas do aluno %d: ", i);
        scanf("%f %f %f", &n1,&n2,&n3);
        
        if (n1>=n2 && n1>=n3){ 
            maior = n1;
            if(n2<=n3){
                media = (n1+maior+n3)/3;
            }else{
                media = (n1+n2+maior)/3;
            }
        }
        
        if (n2>=n1 && n2>=n3){
            maior = n2;
            if(n1<=n3){
                media = (maior+n2+n3)/3;
            }else{
                media = (n1+n2+maior)/3;
            }
        }
        
        if (n3>=n2 && n3>=n1){
            maior = n3;
            if(n2<=n1){
                media = (n1+maior+n3)/3;
            }else{
                media = (maior+n2+n3)/3;
            }
        }
    
        
        printf("\nMedia do aluno: %.2f\n",media);
        media2+=media;
        //media2+=n1+n2+n3; nao sei se a media total e calculada com a maior substituida pela menor ou as notas normais, vou deixar as duas
        
    }
    
    
    printf("\nMedia total dos alunos: %.2f\n",media2/n);
    return 0;
}







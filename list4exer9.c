#include<stdio.h>

struct Can{
    int inscricao;
    int idade;
    int mat;
    int ptbr;
    int pontos;
}Can;

int main(){

    int n,maior = 0,s=0,empate1=0,empate2=0;
    printf("Digite o numero de candidatos: ");
    scanf("%d", &n);

    struct Can candidato[n];
    
    int persistir[n];
    
    for(int i=0;i<n;i++){
        printf("Inscricao do %d candidato: ",i+1);
        scanf("%d", &candidato[i].inscricao);

        printf("Idade do %d candidato: ",i+1);
        scanf("%d", &candidato[i].idade);

        printf("Numero de acertos em matematica do %d candidato: ",i+1);
        scanf("%d", &candidato[i].mat);

        printf("Numero de acertos em portugues do %d candidato: ",i+1);
        scanf("%d", &candidato[i].ptbr);
        
        candidato[i].pontos = candidato[i].idade+(2*candidato[i].mat)+candidato[i].ptbr;
        
        if(i==0){
            maior = candidato[i].pontos;
        }else if(candidato[i].pontos > maior){
            maior = candidato[i].pontos;
        }
    }
    
    //em caso de empate
    for(int i=0;i<n;i++){ //n e numero de candidatos
        for(int j=0;j<n;j++){ //verificar a segunda pessa
            if(maior == candidato[i].pontos && candidato[i].pontos == candidato[j].pontos && i!=j){
                //identifica os candidatos com pontuacoes iguais
                if(candidato[i].idade >= candidato[j].idade){
                    if(candidato[i].idade == candidato[j].idade){
                        //identifica os candidatos com pontuacoes e idades iguais
                        persistir[i] = candidato[i].inscricao;
                        empate2++;   
                    }else{
                        empate1++;
                        s = candidato[i].inscricao;
                    }
                }else{
                    empate1++;
                    s = candidato[j].inscricao;
                }
            }
        }
    }
    
    if(empate1 == 0 && empate2==0){
        printf("\nO Vencedor com a maior pontuacao: \n");
        for(int i=0;i<n;i++){
            if(maior == candidato[i].pontos){
                printf("\nInscricao: %d\nPontuacao do aprovado: %d",candidato[i].inscricao,candidato[i].pontos);
            }
        }
    }else if(empate1!=0 && empate2==0){
        printf("\nEmpate! O Vencedor foi o mais Velho!\n");
        for(int i=0;i<n;i++){
            if(s == candidato[i].inscricao){
                printf("\nVencedor:\nInscricao: %d\nPontuacao do aprovado: %d\nIdade do aprovado: %d",candidato[i].inscricao,candidato[i].pontos,candidato[i].idade);
            }
        }
    }else{
        printf("\nPersistiu o Empate!\nEntrevistados: \n");
        for(int i=0;i<n;i++){
            if(persistir[i] == candidato[i].inscricao){
                printf("\nInscricao do aprovado para a entrevista: %d\nPontuacao do aprovado para a entrevista: %d\nIdade do aprovado para a a entrevista: %d\n",candidato[i].inscricao,candidato[i].pontos,candidato[i].idade);
            }
        }
    }
    
    return 0;
}











#include <stdio.h>
#include <math.h>

int main(){
    int c=0, decisao, num=0;
    float m, r, i, n;

    printf("Calculadora de depósitos periódicos em um investimento ");
    float lucro[c+1];
    
    for(c=0;;c++){
    
        printf("\n1 - Calcular montante final após investimentos"
        "\n2 - Calcular quanto deve ser investido a fim de alcancar o montante desejado"
        "\nOutro número - Sair"
        "\nDigite o numero desejado: ");
        scanf("%d", &decisao);

        if(decisao == 1){

            printf("Investimento %d\n", c+1);
            printf("Digite o valor para deposito mensal: ");
            scanf("%f", &r);
            printf("Digite a taxa mensal de juros: ");
            scanf("%f", &i);
            printf("Digite o numero de  depositos mensais: ");
            scanf("%f", &n);
            
            m = r*((pow(1+(i/100),n)-1)/(i/100));

            printf("\nValor aplicado: R$%.2f", r*n);
            printf("\nMontante final após aplicacoes: R$%.2f",m);
            printf("\nLucro: R$%.2f", m-(r*n));
            
            //adicionar lucros ao vetor lucro
            lucro[c] = m-(r*n);
            num++; //numero de lucros no vetor
            

        }else if(decisao ==2){

            printf("Digite o montante desejado: ");
            scanf("%f", &m);
            printf("Digite a taxa mensal de juros: ");
            scanf("%f", &i);
            printf("Digite o numero de depositos mensais: ");
            scanf("%f", &n);

            r = (m*(i/100))/(pow(1+(i/100),n)-1);

            printf("Valor a ser aplicado: R$%.2f", r);
            
        }else {
            break;
        }
        
        printf("\n");
    }
    
    char resposta;
    printf("Ver lucros em ordem crescente de investimento (s/n): ");
    scanf("%s", &resposta);
    
    if(resposta == 's'){
        //colocar lucros em ordem crescente
        float armazenador;
        for(int j=0;j<num;j++){
            for(c=j+1;c<num;c++){
                if(lucro[j] > lucro[c]){
                    armazenador= lucro[j];
                    lucro[c] = lucro[j];
                    lucro[j] = armazenador;
                }
            }
        }
        //mostrar lucros
        printf("Lucros: ");
        for(c=0;c<num;c++){
            printf("%.2f ", lucro[c]);
        }
    }
    
    printf("\n");
    return 0;
}
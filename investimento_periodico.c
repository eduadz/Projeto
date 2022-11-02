#include <stdio.h>
#include <math.h>

int main(){
    int cont=0, decisao;
    float m, r, i, n , M_invest[100][5]; //colunas: dep mensal, taxa, numero de dep, montante e lucro
    float valoraplicado=0;

    printf("Calculadora de investimentos em depósito periódicos");
    
    
    printf("\n1 - Calcular montante final após investimentos"
    "\n2 - Calcular quanto deve ser investido a fim de alcancar o montante desejado"
    "\nOutro número - Sair"
    "\nDigite o numero desejado: ");
    scanf("%d", &decisao);

    char continuar;
    if(decisao == 1){
        continuar = 's';

        while(continuar == 's'){
            printf("\nInvestimento %d\n", cont+1);
            printf("Digite o valor para deposito mensal: ");
            scanf("%f", &M_invest[cont][0]);
            printf("Digite a taxa mensal de juros: ");
            scanf("%f", &M_invest[cont][1]);
            printf("Digite o numero de  depositos mensais: ");
            scanf("%f", &M_invest[cont][2]);
                
            m = M_invest[cont][0]*((pow(1+(M_invest[cont][1]/100),M_invest[cont][2])-1)/(M_invest[cont][1]/100));
            valoraplicado = M_invest[cont][0]*M_invest[cont][2];

            M_invest[cont][3] = m;
            M_invest[cont][4] = m - valoraplicado;

            printf("\nValor aplicado: R$%.2f", valoraplicado);
            printf("\nMontante final após aplicacoes: R$%.2f", m);
            printf("\nLucro: R$%.2f", M_invest[cont][4]);

            printf("\nDigite se deseja continuar (s/n): ");
            scanf("%s", &continuar);
            cont++;

        }

    }else if(decisao ==2){
        continuar = 's';
        while(continuar == 's'){
            printf("Digite o montante desejado: ");
            scanf("%f", &m);
            printf("Digite a taxa mensal de juros: ");
            scanf("%f", &i);
            printf("Digite o numero de depositos mensais: ");
            scanf("%f", &n);

            r = (m*(i/100))/(pow(1+(i/100),n)-1);

            printf("Valor a ser aplicado periodicamente: R$%.2f", r);

            printf("\nDigite se deseja continuar (s/n): ");
            scanf("%s", &continuar);
        }
        
    }else{
        printf("Saída realizada.\n");
    }

    printf("\n");
    
    //imprimindo o investimento com maior lucro 
    if(cont > 1){
        int maior_indice;
        float maior_lucro;
        M_invest[0][4] = maior_lucro;
        maior_indice = 0;

        for(int l=0;l<cont;l++){
            if(M_invest[l][4] > maior_lucro){
                maior_lucro = M_invest[l][4];
                maior_indice = l;
            }
        }
        printf("Maior lucro: %.2f, no investimento %d.", maior_lucro, maior_indice+1);
    }
    
    printf("\n");
    return 0;
}
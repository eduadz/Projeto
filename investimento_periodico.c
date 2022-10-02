#include <stdio.h>
#include <math.h>

int main(){
    int c, decisao;
    float m, r, i, n;

    printf("Calculadora de depósitos periódicos em um investimento ");

    for(c=0;;c++){

        printf("\n1 - Calcular montante final após investimentos"
        "\n2 - Calcular quanto deve ser investido a fim de alcancar o montante desejado"
        "\n0 - Sair"
        "\nDigite o numero desejado: ");
        scanf("%d", &decisao);

        if(decisao == 1){
            printf("Digite o valor para deposito mensal: ");
            scanf("%f", &r);
            printf("Digite a taxa mensal de juros: ");
            scanf("%f", &i);
            printf("Digite o numero de depositos mensais: ");
            scanf("%f", &n);

            m = r*((pow(1+(i/100),n)-1)/(i/100));

            printf("\nValor aplicado: R$%.2f", r*n);
            printf("\nMontante final após aplicacoes: R$%.2f",m);
            printf("\nLucro: R$%.2f", m-(r*n));

        }else if(decisao ==2){

            printf("Digite o montante desejado: ");
            scanf("%f", &m);
            printf("Digite a taxa mensal de juros: ");
            scanf("%f", &i);
            printf("Digite o numero de depositos mensais: ");
            scanf("%f", &n);

            r = (m*(i/100))/(pow(1+(i/100),n)-1);

            printf("Valor a ser aplicado: R$%.2f", r);

        }else{
            printf("Saindo");
            break;
        }

        printf("\n");
    }

    printf("\n");
    return 0;
}
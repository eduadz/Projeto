#include <stdio.h>
#include <math.h>
#include "funcoes.c"

int main(void){
    int decisao;
    
    while(1){
        printf("1 - Calculadora de juros\n"
           "2 - Calcular investimento periodico\n"
           "0 - Sair\n"
           "Digite o numero desejado: ");
        scanf("%d", &decisao);

        if(decisao == 0){
            break;
        }
        else if(decisao == 1){
            //chamar funcao calculo juros
            calculojuros();

        }else if(decisao == 2){
            //chamar funcao calculadora de invest periodico
            invest_period();
        }else{
            printf("\nDigite uma opcao valida\n");
        }
    }
    
}
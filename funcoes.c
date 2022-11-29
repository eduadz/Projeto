#include "funcoes.h"

float calculojuros(){
    float pv, i, t, fv , j;
    int decisao, tipo;
    printf("\nCalculadora de juros\n");

    while(1){
        printf("-----------------------------"
            "\n1 - Capitalizacao simples"
            "\n2 - Capitalizacao composta"
            "\n0 - Voltar"
            "\nDigite o tipo de capitalizacao: ");
            scanf("%d", &tipo); 
            printf("------------------------------");

            if(tipo == 0){
                break;
            }else if(tipo == 1){
                printf(
                "\n1 - Juros"
                "\n2 - Capital/pv"
                "\n3 - Taxa"
                "\n4 - Prazo/tempo"
                "\n5 - Montante/fv"
                "\nDigite o que você deseja calcular: ");
                scanf("%d", &decisao);

                switch(decisao){
                    case 1:
                        printf("Digite o capital inicial: ");
                        scanf("%f", &pv);
                        printf("Digite a taxa: ");
                        scanf("%f", &i);
                        printf("Digite o prazo: ");
                        scanf("%f", &t);
                        j = pv*(i/100)*t;

                        printf("Juros: R$%.2f", j);
                        break;
                    case 2:
                        printf("Digite o juros: ");
                        scanf("%f", &j);
                        printf("Digite a taxa: ");
                        scanf("%f", &i);
                        printf("Digite o prazo: ");
                        scanf("%f", &t);
                        pv = j/((i/100)*t);
                        
                        printf("Capital inicial: R$%.2f", pv);
                        break;
                    case 3:
                        printf("Digite o juros: ");
                        scanf("%f", &j);
                        printf("Digite o capital inicial: ");
                        scanf("%f", &pv);
                        printf("Digite o prazo: ");
                        scanf("%f", &t);
                        i = j/(pv*t);
                        
                        printf("Taxa: %.2f", i*100);
                        break;
                    case 4:
                        printf("Digite o juros: ");
                        scanf("%f", &j);
                        printf("Digite o capital inicial: ");
                        scanf("%f", &pv);
                        printf("Digite a taxa: ");
                        scanf("%f", &i);
                        t = j/(pv*i/100);
                        
                        printf("Prazo da capitalização: %.2f", t);
                        break;
                    case 5:
                        printf("Digite o tempo: ");
                        scanf("%f", &t);
                        printf("Digite o capital inicial: ");
                        scanf("%f", &pv);
                        printf("Digite a taxa: ");
                        scanf("%f", &i);
                        fv = pv*(1+((i/100)*t));
                        
                        printf("Montante: %.2f", fv);
                        break;
                    default: printf("Digite um numero valido");

                }
            }else if(tipo == 2 ){

                printf("\n1 - Juros"
                    "\n2 - Capital/pv"
                    "\n3 - Taxa"
                    "\n4 - Prazo/tempo"
                    "\n5 - Montante/fv"
                    "\nDigite o que você deseja calcular: ");
                    scanf("%d", &decisao);

                    switch(decisao){
                        case 1:
                            printf("Digite o capital inicial: ");
                            scanf("%f", &pv);
                            printf("Digite a taxa: ");
                            scanf("%f", &i);
                            printf("Digite o prazo: ");
                            scanf("%f", &t);
                            j = pv*(pow(1+(i/100), t)-1);

                            printf("Juros: R$%.2f", j);
                            break;
                        case 2:
                            printf("Digite o montante: ");
                            scanf("%f", &fv);
                            printf("Digite a taxa: ");
                            scanf("%f", &i);
                            printf("Digite o prazo: ");
                            scanf("%f", &t);
                            pv = fv/(pow(1+(i/100), t));
                            
                            printf("Capital inicial: R$%.2f", pv);
                            break;
                        case 3:
                            printf("Digite o montante: ");
                            scanf("%f", &fv);
                            printf("Digite o capital inicial: ");
                            scanf("%f", &pv);
                            printf("Digite o prazo: ");
                            scanf("%f", &t);
                            i = pow(fv/pv, 1/t)-1;
                            
                            printf("Taxa: %.2f", i*100);
                            break;
                        case 4:
                            printf("Digite o montate: ");
                            scanf("%f", &fv);
                            printf("Digite o capital inicial: ");
                            scanf("%f", &pv);
                            printf("Digite a taxa: ");
                            scanf("%f", &i);
                            t = log(fv/pv)/log(1+(i/100));
                            
                            printf("Prazo da capitalização: %.2f", t);
                            break;
                        case 5:
                            printf("Digite o tempo: ");
                            scanf("%f", &t);
                            printf("Digite o capital inicial: ");
                            scanf("%f", &pv);
                            printf("Digite a taxa: ");
                            scanf("%f", &i);
                            fv = pv*(pow(1+(i/100),t));
                            
                            printf("Montante: %.2f", fv);
                            break;
                        default: printf("Digite um numero valido");
                        
                    }      
            }else{
                printf("\nDigite um valor valido\n");
            }
        printf("\n");
    }

    printf("\n");
}

float invest_period(){

    int cont=0, decisao;
    float m, r, i, n; //colunas: dep mensal, taxa, numero de dep, montante e lucro
    float valoraplicado=0;

    printf("\nCalculadora de investimentos em depósito periódicos\n");
    
    while(1){
        printf("1 - Calcular montante final após investimentos\n"
        "2 - Calcular quanto deve ser investido a fim de alcancar o montante desejado\n"
        "0 - Voltar\n"
        "Digite o numero desejado: ");
        scanf("%d", &decisao);

        if(decisao == 0){
            break;
        }
        else if(decisao == 1){

            printf("\nInvestimento %d\n", cont+1);
            printf("Digite o valor para deposito mensal: ");
            scanf("%f", &r);
            printf("Digite a taxa mensal de juros: ");
            scanf("%f", &i);
            printf("Digite o numero de  depositos mensais: ");
            scanf("%f", &n);
                
            m = r*((pow(1+(i/100),n)-1)/(i/100));
            valoraplicado = r*n;

            printf("\nValor aplicado: R$%.2f", valoraplicado);
            printf("\nMontante final após aplicacoes: R$%.2f", m);
            printf("\nLucro: R$%.2f", m-valoraplicado);
            printf("\n");
            cont++;

        }else if(decisao ==2){

            printf("Digite o montante desejado: ");
            scanf("%f", &m);
            printf("Digite a taxa mensal de juros: ");
            scanf("%f", &i);
            printf("Digite o numero de depositos mensais: ");
            scanf("%f", &n);

            r = (m*(i/100))/(pow(1+(i/100),n)-1);

            printf("\nValor a ser aplicado periodicamente: R$%.2f", r);
            printf("\n");
            
        }else{
            printf("\nDigite um numero valido\n");
        }
        printf("\n");
    }
    printf("\n");
}


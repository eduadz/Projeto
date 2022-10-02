#include <stdio.h>
#include <math.h>

int main(){
    int decisao, tipo;
    float pv, i, t, fv , j;
    while(1){
        printf("-----------------------------"
        "\n1 - Capitalizacao simples"
        "\n2 - Capitalizacao composta"
        "\n0 - Sair"
        "\nDigite o tipo de capitalizacao: ");
        scanf("%d", &tipo); 
        printf("------------------------------");
    

        if(tipo == 1){

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
            break;
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
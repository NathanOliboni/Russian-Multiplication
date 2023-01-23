#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int op;
    do{
        printf("Informe a opcao desejada: ");
        printf("\n[0] - FINALIZAR O PROGRAMA \n[1] - MULTIPLICAR OS NUMEROS\n ");
        scanf("%i", &op);
            while(op<0 || op>1){
                printf("Escolha uma das duas opcoes informadas.");
                printf("\n[0] - FINALIZAR O PROGRAMA.\n[1] - MULTIPLICAR OS NUMEROS.\n");
                scanf("%i", &op);
            }
        int num1, num2, num, num0, tam=0, guardaNum=0;
        int A[tam+1];
        int B[tam+1];
        int multiplicacoes = 0;    

        switch (op){
            case 0:
                break;
            case 1:
                printf("Informe dois numeros para serem multiplicados: ");
                scanf("%i %i", &num1, &num2);
                num = num1;
                num0 = num2;
                
                while(num1 != 0){
                    num1 /= 2;
                    tam += 1;
                }

                while(multiplicacoes != tam){
                    printf("%d | %d ", num, num0);
                    if(num % 2 != 0){
                        guardaNum += num0;
                        printf("| %d", num0);
                    } else {
                        printf("| --");
                    }
                    printf("\n");
                    num /= 2;
                    num0 *= 2;
                    multiplicacoes += 1;
                    A[multiplicacoes] = num;
                    B[multiplicacoes] = num0;
                }

                printf("\nA multiplicacao dos numeros eh: %i\n ", guardaNum);
                break;
            default:
                break;
        }
    }while(op != 0);
}
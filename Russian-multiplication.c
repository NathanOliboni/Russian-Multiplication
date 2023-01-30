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
           
        int num1, num2, num, num0, tam=0, soma=0;
        if(op == 1){
            printf("Informe dois numeros para serem multiplicados: ");
            scanf("%i %i", &num1, &num2);
            num = num1;
            num0 = num2;
        
            while(num1 != 0){
                num1 /= 2;
                tam += 1;
            }
            int A[tam+1];
            int B[tam+1];
            int i = 0, multiplicacoes = 0, j=0;
            int guardaNum[i];
                while(multiplicacoes != tam){
                    printf("%d | %d ", num, num0);
                    if(num % 2 != 0){
                        soma += num0;
                        guardaNum[i] = num0;
                        i+= 1;
                        j+= 1;
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
                   for (i=0;i<j;i++){
                        printf("\n\n%d |", guardaNum[i]);
                    }
                printf("\nA multiplicacao dos numeros eh: %i\n ", soma);
        } 
    }while(op != 0);
}

#include <stdio.h>
#include <stdlib.h>

#define CALCULO 10000

int main(){
    
    int soma, sub, mult, conta, calculo;
    float a, b, div;
    
    for(int i = 1; i <= CALCULO; i++){
        printf("Digite o Operador desejavel :\n");
        printf("(1)Soma, (2)Subtracao, (3)Multiplicacao, (4)Divisao:\n");
        scanf("%d" , &conta);
        printf("Digite um numero : \n");
        scanf("%f", &a);
        printf("Digite o segundo numero : \n");
        scanf("%f", &b);
        

            switch (conta){
                case 1:
                soma = a + b;
                printf("O resultado da soma deu %d \n", soma);
                break;

                case 2:
                sub = a - b;
                printf("O resultado da subtracao foi %d \n", sub);
                break;

                case 3:
                mult = a * b;
                printf("O resultado da multiplicacao deu %d \n", mult);
                break;

                case 4:
                div = a / b;
                printf ("O resultado da divisao foi %f \n", (float)div);
                break;
            }
            
    }
}
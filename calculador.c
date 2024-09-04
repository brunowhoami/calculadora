#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CALCULO 10000

int main(){
    
    int soma, sub, mult, conta, calculo, numeroPrimo;
    float a, b, div;
    double raiz;



    for(int i = 1; i <= CALCULO; i++){

        printf("Digite o Operador desejavel :\n");
        printf("(1)Soma, (2)Subtracao, (3)Multiplicacao, (4)Divisao, (5)Raiz, (6)Lista de Numeros Primos de 0 a 200:\n");

        scanf("%d" , &conta);

    if(conta == 5){
        printf("Digite um valor para calcular a raiz quadrada:\n");
        scanf("%f", &a);
        raiz = sqrt(a);
        printf ("O resultado da raiz foi %f \n", (double)raiz);
        continue;
        }
    if(conta == 6){
        for(int numeroPrimo = 2; numeroPrimo <= 200; numeroPrimo++){
            raiz = sqrt(numeroPrimo);
            int j, isPrime;
            isPrime = 1;
                for(int j = 2; j <= raiz; j++){
                    if(numeroPrimo % j == 0){
                    isPrime = 0;
                    break;
                }
                }
                if(isPrime){
                printf("%d ", numeroPrimo);
            }
        }
        continue;
    }
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
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "calculador.h"

#define CALCULO 10000
// #define GRAVIDADE 9.81

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");


    int soma, sub, mult, conta, c, d, calculo, numeroPrimo;
    float a, b, div, resto;
    double raiz;



    for(int i = 1; i <= CALCULO; i++){

        printf("********************************\n");
        printf("**Seja Bem-Vindo a Calculadora**\n");
        printf("********************************\n");
        printf("\nDigite o Operador desejavel :\n");
        printf("(1)Soma, (2)Subtracao, (3)Multiplicacao, (4)Divisao, (5)Resto da Divisao (6)Raiz, (7)Lista de Numeros Primos de 0 a 200, (8)Velocidade de Queda:\n");

        scanf("%d" , &conta);
        printf("\n\n");
        
    if(conta == 6){
        calcularRaizQuadrada();
        continue;
        }

    if(conta == 7){
        listarNumerosPrimos();
        continue;
    }

    if(conta == 8){

        int gravitacional;
        // double gravidades[GRAVIDADE] = {9.81, 1.62, 3.71, 8.87, 3.7, 24.7, 10.44, 8.69, 11.15, 0.62};

        printf("Escolha a Gravidade Desejada:\n");
        printf("(1)Terra, (2)Lua, (3)Marte, (4)Venus, (5)Mercurio, (6)Jupiter, (7)Saturno, (8)Urano, (9)Netuno, (10)Plutao:\n");
        
        scanf("%d", &gravitacional);

            switch (gravitacional)
            {
            case 1:
                velocidadeQuedaNaTerra();
                break;
            
            case 2:
                velocidadeQuedaNaLua();
                break;
            
            case 3:
                velocidadeQuedaMarte();
                break;;

            case 4:
                velocidadeQuedaVenus();
                break;;

            case 5:
                velocidadeQuedaMercurio();
                break;;

            case 6:
                velocidadeQuedaJupiter();
                break;;

            case 7:
                velocidadeQuedaSaturno();
                break;;

            case 8:
                velocidadeQuedaUrano();
                break;;

            case 9:
                velocidadeQuedaNetuno();
                break;;
            
            case 10:
                velocidadeQuedaPlutao();
                break;
            
            default:
            break;
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

                case 5:
                resto = c % d;
                printf("O resto da divisao e %f: \n", (float)resto);
                break;

                default:
                break;
            }
            
    }
}
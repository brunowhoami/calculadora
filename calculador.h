#ifndef CALCULADOR_H
#define CALCULADOR_H

#define GRAVIDADETERRA 9.81
#define GRAVIDADELUA 1.62
#define GRAVIDADEMARTE 3.71
#define GRAVIDADEVENUS 8.87
#define GRAVIDADEMERCURIO 3.7
#define GRAVIDADEJUPITER 24.79
#define GRAVIDADESATURNO 10.44
#define GRAVIDADEURANO 8.69
#define GRAVIDADENETUNO 11.15
#define GRAVIDADEPULTAO 0.62

#include <stdio.h>
#include <math.h>
#include <locale.h>

// Função para calcular a raiz quadrada
void calcularRaizQuadrada() {
    float a;
    double raiz;
    
    printf("Digite um valor para calcular a raiz quadrada:\n");
    scanf("%f", &a);
    raiz = sqrt(a);
    printf("O resultado da raiz foi %f \n", (double)raiz);
}

void listarNumerosPrimos(){
    int numeroPrimo, j, isPrime;
    double raiz;

printf("Numeros primos de 0 a 200:\n");

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
                printf("%d,\n", numeroPrimo);
            }
        }

}

void velocidadeQuedaNaTerra(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADETERRA * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}
void velocidadeQuedaNaLua(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADELUA * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}

void velocidadeQuedaMarte(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADEMARTE * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}

void velocidadeQuedaVenus(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADEVENUS * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}

void velocidadeQuedaMercurio(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADEMERCURIO * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}

void velocidadeQuedaJupiter(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADEJUPITER * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}

void velocidadeQuedaSaturno(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADESATURNO * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}

void velocidadeQuedaUrano(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADEURANO * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}

void velocidadeQuedaNetuno(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADENETUNO * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}

void velocidadeQuedaPlutao(){
    double tempo, velocidade;

    printf("Digite o tempo da queda em segundos:\n");
    scanf("%lf", &tempo);

    velocidade = GRAVIDADEPULTAO * tempo;

    printf("A velocidade de queda apos %.2f segundos e %.2f m/s.\n", tempo, velocidade);

}

#endif

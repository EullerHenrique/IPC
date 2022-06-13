/**
 * @file exemplo10.c
 * @brief Calcula a soma dos n primeiros termos de uma progressão
 *        aritmética.
 *
 *   O programa lê o primeiro termo a0, o número de termos n e a razão
 * r da P.A.
 *
 * @author Alexsandro Santos Soares
 * @date 22/04/2018
 * @bugs Nenhum conhecido.
 */
#include <stdio.h>

int main(void)
{
    float a0 = 0.0;   // primeiro termo
    int n = 0;        // número de termos
    float r = 0.0;    // razão
    int i = 0;        // contador de iterações
    float soma = 0.0; // acumula a soma
    float ai = 0.0;   // o i-ésimo termo da PA

    scanf("%f", &a0);
    scanf("%d", &n);
    scanf("%f", &r);

    i = 0;
    soma = 0.0;
    ai = a0;
    while (i < n) {
        soma = soma + ai;
        i = i + 1;
        ai = ai + r;
    } // while
    printf("Soma da P.A. = %.3f\n", soma);

    return 0;
} // main

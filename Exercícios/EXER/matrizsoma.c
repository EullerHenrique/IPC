/**
 * @file exemplo2.c
 * @brief Calcula a média de todos os elementos em uma matriz de inteiros
 *
 * @author Alexsandro Santos Soares
 * @date 1/05/2018
 * @bugs Nenhum conhecido.
 */
#include <stdio.h>

#define NUM_LINS  5
#define NUM_COLS 4

/**
 * @brief Calcula a média dos elementos na matriz dada
 *
 * @param m matriz de inteiros
 */
double media(int m[][NUM_COLS]){
  double soma = 0.0;
  for(int i = 0; i < NUM_LINS; i++)
    for(int j = 0; j < NUM_COLS; j++)
      soma += m[i][j];
  
  return (soma / (NUM_LINS * NUM_COLS));
} // media


int main(void){
  double m = 0.0; // média
  int matriz[NUM_LINS][NUM_COLS] =
    {{ 0,  1,  2,  3},
     {10, 11, 12, 13},
     {20, 21, 22, 23},
     {30, 31, 32, 33},
     {40, 41, 42, 43}
    };

  m = media(matriz);
  
  printf("A média é %lf\n", m);
  return 0;
} // main

/**
 * @file exemplo6.c
 * @brief Lê uma uma linha inteira de texto e a imprime na tela.
 *
 * @author Alexsandro Santos Soares
 * @date 5/05/2018
 * @bugs Nenhum conhecido.
 */
#include <stdio.h>

int main(void){
  char nome[30] = {'\0'};
  char c = '\0';
  int i = 0;

  printf("Digite o nome: ");
 
  for(i = 0; c != '\n';i++){   // termina se o usuário digitar enter
    c = getchar();
    nome[i] = c;
  } 

  nome[i] = '\0';      // insira o caractere nulo no final

  printf("O nome digitado foi %s.\n", nome);

  return 0;
} // main

/**
 * @file exemplo4.c
 * @brief Metafóra de um livro para entender arranjos multidimensionais
 *
 * @author Alexsandro Santos Soares
 * @date 1/05/2018
 * @bugs Nenhum conhecido.
 */
#include <stdio.h>

#define PAGINAS  300
#define LINHAS   5
#define COLUNAS  64

int main(void){
  char livro[PAGINAS][LINHAS][COLUNAS];
  int pagina;

  // Leitura do texto digitado pelo usuário
  do {
     printf("Digite o número da página: ");
     scanf("%d", &pagina);
  } while (pagina < 0 || pagina >= PAGINAS);

  printf("Digite o texto para a página %d\n\n", pagina);
  for(int linha = 0; linha < LINHAS; linha++)
     for(int coluna = 0; coluna < COLUNAS; coluna++)
       scanf("%c", &livro[pagina][linha][coluna]);

  printf("\nAqui está o texto digitado:\n\n");
  for(int linha = 0; linha < LINHAS; linha++){
     for(int coluna = 0; coluna < COLUNAS; coluna++)
        printf("%c", livro[pagina][linha][coluna]);
  } // for linha
  
  return 0;
} // main

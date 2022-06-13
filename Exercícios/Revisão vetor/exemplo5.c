/**
 * @file exemplo5.c
 * @brief Lê dados do teclado em arranjo, constrói o arranjo de 
 *        frequência e o exibe como um histograma.
 *
 * @author Alexsandro Santos Soares
 * @date 1/05/2018
 * @bugs Nenhum conhecido.
 */
#include <stdio.h>
//#include <stdlib.h>

#define TAM_MAX 100
#define INTERVALO_FREQ 20

/**
 * @brief Analisa os dados em nums e constrói a distribuição de 
 *        frequência
 *
 * @param nums       arranjo com dados validados a ser analisado
 * @param tamanho    número de elementos no arranjo
 * @param frequencia arranjo que acumulará a frequência
 * @param intervalo  valor/índice máximo para a frequência
 */
void conteFrequencia(int nums[],       int tamanho,
                     int frequencia[], int intervalo){

  // Primeiro inicializa o arranjo de frequência
  for(int i = 0; i < intervalo; i++)
    frequencia[i] = 0;

  // Varre nums e constrói o arranjo de frequência
  for(int i = 0; i < tamanho; i++)
    frequencia[ nums[i] ]++;

  return;
} // conteFrequencia


/**
 * @brief Imprime um histograma representando os dados analisados.
 *
 * @param freq    um arranjo contendo o número de ocorrências de cada valor
 * @param tamanho número de elementos no arranjo de frequência
 */
void crieHistograma(int freq[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%2d %2d ", i, freq[i]);
        for(int j = 1; j <= freq[i]; j++)
            printf("*");
        printf("\n");
    } // for i
    return;
} // crieHistograma


/**
 * @brief Lê os dados do teclado e coloca no arranjo. O arranjo
 *        não precisa ser completamente preenchido.
 *
 * @param dados     um arranjo vazio
 * @param tamanho   número máximo de elementos do arranjo
 * @param intervalo maior valor permitido
 * @return número de elementos lidos
 */
int leiaDados(int dados[], int tamanho, int intervalo){
    int i = 0;
    int numero = 0;
    
    while (i < tamanho && scanf("%d", &numero) != EOF){
        if (0 <= numero && numero < intervalo)
            dados[i++] = numero;
        else
            printf("O número %d é invalido e será ignorado.\n",
                   numero);
    } // while i

    return i;
} // leiaDados


/**
 * @brief Imprime os dados como uma tabela
 *
 * @param dados     um arranjo com os dados
 * @param tamanho   número de elementos no arranjo
 * @param maxLinha  número máximo de elementos por linha
 */
void imprimaDados(int dados[], int tamanho, int maxLinha){
    int numImpressos = 0;

    printf("\n\n");
    for(int i = 0; i < tamanho; i++){
        printf("%2d ", dados[i]);
        numImpressos++;
        if (numImpressos >= maxLinha){
            printf("\n");
            numImpressos = 0;
        } // if
    } // for
    printf("\n\n");
    return;
} // imprimaDados


int main(void){
    int tamanho = 0;
    int numeros[TAM_MAX]={0};
    int frequencia[INTERVALO_FREQ]={0};

    tamanho = leiaDados(numeros, TAM_MAX, INTERVALO_FREQ);
    imprimaDados(numeros, tamanho, 10);

    conteFrequencia(numeros, tamanho, frequencia, INTERVALO_FREQ);
    crieHistograma(frequencia, INTERVALO_FREQ);
    return 0;
} // main


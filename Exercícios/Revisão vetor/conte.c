#include <stdio.h>

int leiaDados(int dados[], int tamanho, int intervalo){
    int i = 0;
    int numero = 0;
    
    while (i <= tamanho && scanf("%d", &numero) != EOF){
        if (0 <= numero && numero < intervalo)
            dados[i++] = numero;
        else
            printf("O número %d é invalido e será ignorado.\n",numero);
    } // while i

    return i;
} // leiaDados



void conteFrequencia(int nums[],int tamanho,int frequencia[], int intervalo){

  // Primeiro inicializa o arranjo de frequência
  for(int i = 0; i < intervalo; i++)
    frequencia[i] = 0;

  // Varre nums e constrói o arranjo de frequência
  for(int i = 0; i < tamanho; i++)
    frequencia[ nums[i] ]++;

  return;
} // conteFrequencia


void crieHistograma(int freq[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%2d %2d ", i, freq[i]);
        for(int j = 1; j <= freq[i]; j++)
            printf("*");
        printf("\n");
    } // for i
    return;
} // crieHistograma


int main(void){
    int tamanho = 0;
    int TAM_MAX = 0;
    printf("Digite o tamanho máximo: ");
    scanf("%d", &TAM_MAX);

    int numeros[TAM_MAX];

    int INTERVALO_FREQ = 0;
    printf("Digite o intervalo da frequencia: ");
    scanf("%d", &INTERVALO_FREQ);

    int frequencia[INTERVALO_FREQ];

    tamanho = leiaDados(numeros, TAM_MAX, INTERVALO_FREQ);

	conteFrequencia(numeros, tamanho,frequencia,INTERVALO_FREQ);
	crieHistograma(frequencia, INTERVALO_FREQ);
	return 0;
}
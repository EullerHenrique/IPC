#include <stdio.h>

int main(void){
	int menor = 0;
    int maior = 0;
    int posicao = 0;
    int posicao2 = 0;
    int N = 0; // tamanho do vetor, número de casos teste
	scanf("%d", & N);
	int valores[N]; 


    for(int i = 0; i < N; i++){ // laço for que armazena todos os valores digitados pelo usuario dentro do vetor com o tamanho determinado pelo usuario                         
    	scanf("%d", & valores[i]); // lê cada valor digitado pelo usuario e armazena dentro do vetor
    	if(i == 0){
    		menor = valores[i]; // valores [0] = 1
    	    posicao = i;
        }
    
    	if(valores[i] < menor){ // valores [1] = 6  6 < 1 = incorreto 
    		menor = valores[i];
            posicao = i;
    	}

        if(valores[i] >  maior){
            maior = valores[i];
            posicao2 = i;
        }
    } // o laço for continua até todos os elementos serem inseridos dentro do vetor, no caminho o menor valor é determinado
                                                 	    	 
printf("Menor valor: %d\n Maior valor : %d\n", menor, maior);
printf("Posicao menor: %d\n Posicao menor: %d\n", posicao, posicao2);

return 0;

}

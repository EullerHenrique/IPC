#include <stdio.h>
int main(void){
	int numeros[5];
	int x = 0;
    int valor = 0;
    int valor2 = 0;
    int valor3 = 0;
    int valor4 = 0;

	for(int i = 0; i < 5; i++){ // o primeiro for serve para guardar todos os números dentro do vetor
		scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 5; i ++){ // o segundo for serve para colocar cada número lido na variavel x um por um
    	x = numeros[i];          
        if (x % 2 == 0){
            valor = valor + 1; 
        }
        else{
        	valor2 = valor2 + 1;
        }
        if(x > 0){
        	valor3= valor3 + 1;
        }
        else if(x < 0){
               valor4= valor4 + 1;

        }
    }

    printf("%d valor(es) par(es)\n",valor);    
    printf("%d valor(es) impar(es)\n",valor2);
    printf("%d valor(es) positivo(s)\n",valor3);
    printf("%d valor(es) negativo(s)\n",valor4);

return 0;
}    
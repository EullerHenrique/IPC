#include <stdio.h>
int main(void){
    int x = 0; // x represtenta cada numero
    int soma = 0; 
    int numeros[20]; // represtanta a quantidade limite que o vetor pode armazenar
    int n = 0;  // representa quantos casos testes serao feitos
    int i = 0;
    int j = 0;

    while(n < 1 || n > 20){ // caso incorreto, continua lendo até achar o número válido
          scanf("%d", &n);
    }

    for(i = 0; i < n; i++){ //  lé todos os numeros antes de determinar se é perfeito, contador de testes; percorre os numeros de 0 a n, colocando os numeros no vetor.
        scanf("%d", &numeros[i]);   
    }    


    for (i = 0; i < n; i++) { // coloca o vetor no x 
    	x = numeros[i];           // reinicia a soma
    	soma = 0;

		for(j = 1; j < x; j ++){ // percorre todos os numeros de 1 a x para determinar se os numeros são divisores de x.
		    if(x % j == 0){
		       soma = soma + j; // resultado da soma, determina se o numero é perfeito
		    }
		}

		if(soma == x){
			printf("%d eh perfeito\n", x);
		}else{
			printf("%d nao eh perfeito\n", x);
		}
    }


return 0;
}
#include <stdio.h>

int main(void){
	int maior = 0;
	int menor = 0;
    int N = 0;
	scanf("%d", & N);
	int valores[N];


    for(int i = 0; i < N; i++){                             
    	scanf("%d", & valores[i]);
    	if(i == 0){
    		maior = valores[i]; // valores [0] = 1
    		menor = valores[i]; // valores [0] = 1
    	}
        
        if (valores[i] > maior){ // valores [1] = 6, 6 > 1  = correto
    		maior = valores[i]; // maior = 6
    	}  
    	
    	if(valores[i] < menor){ // valores [1] = 6  6 < 1 = incorreto 
    		menor = valores[i];
    	}
    } // o laço for continua até todos os elementos serem inseridos dentro do vetor, no caminho o menor e o maior valor é determinado
                                                 	    	 
printf("%d", maior);
printf("%d", menor);

return 0;

}

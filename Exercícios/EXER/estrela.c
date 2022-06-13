#include <stdio.h>

int main(void){
	int x = 0; // número de estrelas
    int roubados = 0; // numero de carneiros roubados
    int salvos = 0; // numero de carneiros salvos
    scanf("%d",&x);
    int estrelas[x]; // vetor que contem a quantidade de estrelas representada pelo tamanho do vetor e vetor que contem a quantidade de carneiros presente em cada estrela
    
    int atacadas = 0; // numero de estrelas atacadas
    int roubados2 = 0;
    int roubados3 = 0;

    for(int i = 0; i < x; i++){ //  lê todos os numeros, percorre os numeros de 0 a x, colocando os numeros no vetor.
        scanf("%d", &estrelas[i]);  
    }
    

    for (int i = 0; i < x; i++){ // calcula o número de carneiros roubados para numeros de carneiros impares
   	    if(estrelas[i] >= 0 && estrelas[i] % 2 != 0){
   		  roubados = roubados + 1;
   		  atacadas = atacadas + 1;
   		}       
    
    }




   for(int estrelas[i]; i < x; i ++){ 
   	   if (estrelas[i] >=0 && estrelas[i] % 2 == 0){
   		   roubados2 = roubados2 + 1;
   	           	   
   	    }
   	}          
   	   
roubados3 = roubados + roubados2;

   // calcula o numero de carneiros salvos
  printf("%d %d", atacadas, roubados3);
  return 0;
}

















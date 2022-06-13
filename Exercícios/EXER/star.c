#include <stdio.h>

int main(void){
	int x = 0; // número de estrelas roubadas
    int c = 0; // numro de carneiros roubados
    
    scanf("%d",&x);
    int estrelas[x];

    for(int i = 0; i < x; i++){ //  lé todos os numeros, percorre os numeros de 1 a n, colocando os numeros no vetor.
        scanf("%d", &estrelas[i]);  
        if(estrelas[i] % 2 != 0){
           c = c + 1;
           x = x + 1; 
        }
    }
        
   for(int i = x - 1; i >= 0; i--){
        scanf("%d", &estrelas[i]);  
        if (estrelas[i] % 2 == 0){
           c = c + 1;
        }
    }


    printf("%d", c);
    return 0;
}















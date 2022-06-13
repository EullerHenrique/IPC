#include <stdio.h>

int main(void){
	int x = 0; // número de estrelas roubadas
    int c = 0; // numro de carneiros roubados
    scanf("%d",&x);
    int carneiros[x];
    int estrelas[x];

    for(int i = 0; i < x; i++){ //  lé todos os numeros, percorre os numeros de 1 a n, colocando os numeros no vetor.
        scanf("%d", &estrelas[i]);  
              while(i <= estrelas[i]){
                    if(estrelas[i] % 2 != 0){
                       c = c + 1;
                       x = x + 1; 
                    }

                    if(estrelas[i] % 2 == 0){
                      for(i = estrelas[i]; i >= 1; i--){
                        c = c + 1; 
                      }
                    }
              }
    }
    
    printf("%d", c);
    return 0;

















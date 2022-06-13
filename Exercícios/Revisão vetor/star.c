#include <stdio.h>

int main(void){
	long long int x = 0; // número total de estrelas
    long long int r = 0;// número de estrelas roubadas
    long long int c = 0; // numro de carneiros roubados
    long long int aux = 0;

    scanf("%lli",&x);
    long long int ovelhas[x];
    long long int soma = 0;

    for(long long int i=0; i<x; i++){
        scanf("%lli",&ovelhas[i]);
        soma = soma + ovelhas[i];
        
    }

    
    for(long long int i = 0; (i < x && i>= 0);){
            if(ovelhas[i] % 2 == 0){
                if(ovelhas[i] > 0){
                    c = c + 1;
                    ovelhas[i] = ovelhas[i] - 1;
                }
                i--; 
                if(aux == 0){
                    r++;
                    aux = 1;
                }
            }
            
            if(ovelhas[i] % 2 != 0){
                c = c + 1;
                ovelhas[i] = ovelhas[i] - 1;
                i++;
                r++;
            }

    }


    printf("%lli %lli\n",r,soma - c);
    return 0;
}















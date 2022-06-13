#include <stdio.h>

int main(void){
	char O;
	scanf("%c",&O);

	double matriz[12][12];
	double soma = 0;

	for(int linha = 0; linha < 12; linha++){ // laço for que lê os elementos da matriz
		for(int coluna = 0; coluna < 12; coluna++){
			scanf("%lf", &matriz[linha] [coluna]);
		}
	}

	for(int linha = 0; linha < 12; linha++){
		for(int coluna = 0; coluna < 12; coluna++){
			if( (linha > coluna) && (linha + coluna > 11) ){
			soma = soma + matriz [linha] [coluna];
			}
		}
	}

 
   if (O == 'S'){
   	printf("%.1lf\n", soma);
   }
   else
   if (O == 'M'){
    printf("%.1lf\n",soma / 30);
   }

return 0;
}
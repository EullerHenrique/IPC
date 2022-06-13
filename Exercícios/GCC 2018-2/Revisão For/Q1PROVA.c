#include <stdio.h>

void imprimeTRIANGULO1 (int numLinhas){
     
	for(int linha = 1; linha <= numLinhas; linha++){
		for(int coluna = 1; coluna <= linha; coluna ++){
			printf("*");
		}
		printf("\n");
	}  
}

void imprimeTRIANGULO2 (int numLinhas){
	for(int linha = numLinhas; linha >= 1; linha --){
		for(int coluna = 1; coluna <= linha; coluna ++){
			printf("*");
		}
		printf("\n");
	}
}	

int main(void){
	int numLinhas = 0;

	scanf("%d", &numLinhas);

	imprimeTRIANGULO1(numLinhas);
	imprimeTRIANGULO2(numLinhas);

return 0;
}


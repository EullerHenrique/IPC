// piramide

#include <stdio.h>

//triangulo crescente 
void imprimeTRIANGULO1(int numLinhas){
	for(int linha = 1; linha < numLinhas; linha++){
		for(int coluna = 1; coluna < linha; coluna ++){
			printf("*");
		}
		printf("\n");
	}
}

//triangulo decrescente
void imprimeTRIANGULO2(int numLinhas){
	for(int linha = numLinhas;  >= 1; linha--){
		for(int coluna = 1; coluna < linha; coluna ++){
			printf("*");
		}
		printf("\n");
	}
}


int main(void){
	int numLinhas = 0;
	scanf("%d", &numLinhas);
//piramide
	imprimeTRIANGULO1(numLinhas);
	imprimeTRIANGULO2(numLinhas);

	return 0;
}
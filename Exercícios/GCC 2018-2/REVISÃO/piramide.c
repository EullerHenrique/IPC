#include <stdio.h>

void imprimetriangulo(void){
int LINHAS = 0;

scanf("%d", &LINHAS);

if(LINHAS % 2 == 0){	
	for(int linha = 1; linha <= LINHAS; linha += 2){
		for(int coluna = 0; coluna < linha ;coluna++){
			printf("*");
		}
		printf("\n");
	}

	for(int linha = LINHAS - 1; linha >= 0; linha -=2){
		for(int coluna = 0; coluna < linha; coluna++){
			printf("*");
		}
		printf("\n");
	}
}else
 if(LINHAS % 2 != 0){
 	for(int linha = 1; linha <= LINHAS; linha += 2){
 		for(int coluna = 0; coluna < linha; coluna ++){
 			printf("*");
 		}
 		printf("\n");
 	}
 	for(int linha = LINHAS - 1; linha >= 0; linha -= 2){
 		for(int coluna = 1; coluna < linha; coluna++){
 			printf("*");
 		}
 		printf("\n");
 	}
 }

 return;
}
 
 int main (void){
 	imprimetriangulo();
 	return 0;
 }




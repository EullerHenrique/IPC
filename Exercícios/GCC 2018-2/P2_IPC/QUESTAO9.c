#include <stdio.h>

int main(void){

	int numLinhas = 0;
	printf("Entre com um número entre 1 e 9: ");

	scanf("%d", &numLinhas);

	if( numLinhas >=1 && numLinhas <=9){
		for(int linha = 1; linha <= numLinhas; linha++){
			for(int coluna = 1; coluna <= numLinhas; coluna++){
				if(coluna > linha){
					printf("*");
				}else{	
				printf("%d", coluna);
				}
			}
			printf("\n");
		}
	}
return 0;
}
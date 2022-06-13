#include <stdio.h>

int main(void){
	int numLinhas = 0;
	printf("Entre com um número entre 1 e 9: ");

	scanf("%d", & numLinhas);


	for(int linha = 1; linha <= numLinhas; linha ++){
		for(int coluna = 1; coluna <= numLinhas; coluna ++){	
			if(coluna > linha){
		    printf("*");
		   }else{
		   	printf("%1d", coluna);
		   }
		}		
		printf("\n");   
	}
return 0;
}
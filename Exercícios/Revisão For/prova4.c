// triangulo ascendente com asterisco

#include <stdio.h>

int main(void){
	int numLinha = 0;
	scanf("%d", &numLinha);

	for(int linha = 1; linha <= numLinha; linha++){
		for(int coluna =1; coluna <= numLinha; coluna ++){
			if(coluna > linha){
				printf("*");
			}else{
				printf("%d", coluna);
			}
		}
		printf("\n");
	}
	return 0;
}

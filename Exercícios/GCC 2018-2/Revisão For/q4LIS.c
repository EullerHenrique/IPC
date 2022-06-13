#include <stdio.h>
int main(void){
	int vet[9] = {0};

	for(int linha = 1; linha < 9; linha++){
		for(int coluna = 1; coluna < linha; coluna++){
			if(coluna > linha){
				printf("\n");
			}else{
				printf("%d, ", coluna);
			}
		}
	}
return 0;
}

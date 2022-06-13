# include <stdio.h>

#define NUM_COLS 3

void lerMatriz(int matriz [] [NUM_COLS], int numLinhas){
	for(int linha = 0; linha < numLinhas; linha ++){
  		for(int coluna = 0; coluna < NUM_COLS; coluna ++){
  			scanf("%d", & matriz [linha] [coluna]);
  		}


    }
return;
}

void imprimeMatriz(int matriz [] [NUM_COLS], int numLinhas){
	for( int linha = 0; linha < numLinhas; linha ++){
		for(int coluna = 0; coluna < NUM_COLS; coluna++){
			printf("%d", matriz [linha] [coluna]);
		}
		printf("\n");
	}
return;
}


int main(void){
	int numLinhas = 0;
    
    scanf("%d", & numLinhas);

	int matriz[numLinhas][NUM_COLS];

    lerMatriz(matriz, numLinhas);
	imprimeMatriz(matriz, numLinhas);
return 0;
}
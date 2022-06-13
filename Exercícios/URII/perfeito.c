#include <stdio.h>

int main(void){
	int x = 0;
	int n = 0;
	int soma = 0;
	int numeros[20] = {0};


	scanf("%d",&n);


	for(int i = 0; i < n; i++){
		scanf("%d", &numeros[i]);
	}


	for(int i = 0; i < n; i++){
		x = numeros[i];
		soma = 0;

		for(int j = 1; j < x; j++){
			if( x % j == 0){
				soma = soma + j;
			}
		}
		if(soma == x){
			printf("%d eh perfeito\n",x);
		}else{
			printf("%d nao eh perfeito\n",x);
		}
	}

return 0;
}
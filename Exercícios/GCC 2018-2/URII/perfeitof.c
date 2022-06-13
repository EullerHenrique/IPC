#include <stdio.h>

int main(void){
	 int x = 0;// numero
	 int n = 0;// numero de casos testes
	 int soma = 0;
	 int i = 0;
	 int j = 0;

	 scanf("%d", &n);//leitura da quantidade de casos testes

	 for(i = 0; i < n; i++){ // laço for que realiza a leitura de cada numero
	 	scanf("%d", &x);// leitura do numero
	 	soma = 0;// zera a soma

	 	for(j = 1; j < x; j++){//laço for que realiza a soma dos divisores de x
	 		if(x % j == 0){ // se o resto de x por j for 0, isto é, se j for um divisor de x a soma é realizada
	 			soma = soma + j;
	 		}
	 	}

	 	if(soma == x){ // se a soma for igual ao numero lido o numero é perfeito
	 		printf("%d eh perfeito\n",x);
	 	}else{ 
	 		printf("%d nao eh perfeito\n",x);
	 	}
	 }

return 0;
}
















// 10 primeiros numeros primos maiores que 10000 

#include<stdio.h>

// retorna 0 se não for primo ou 1 se for

int primos(int num){

	int divisores = 0;
	
	for(int i = 1;i<=num;i++){
		if(num%i==0){
			divisores++;
		}
	}

	if(divisores==2){
		return 1;
	}
	else{
		return 0;
	}
}

int main(void){

	int n = 10000;
	int limite = 10;

	while(limite>0){

		if(primos(n)==1){
			limite--;
			printf("%d\n",n);
		}
		n++;
	}
	return 0;
}


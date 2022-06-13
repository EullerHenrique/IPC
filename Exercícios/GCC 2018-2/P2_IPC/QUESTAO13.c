#include<stdio.h>
int primos(int num){

	int divisores = 0;
	
	for(int i = 1;i <=num;i++){
		if(num%i==0){
			divisores++;
		}
	}

	if(divisores==2){
		return 1;// é primo
	}
	else{
		return 0;// não é primo
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


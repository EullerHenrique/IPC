#include <stdio.h>

int main(void){
	long A = 0;
	long B = 0;
	long int soma = 0;
    

	scanf("%ld %ld",&A,&B);
	if(A > 0 && A <= B && B > 0){
		for(int i = A; i <= B; i++){
			soma = soma + i;
		}
		printf("%ld",soma);
		printf("\n");
	}
return 0;
}
#include <stdio.h>

int main(void){
	unsigned long int A = 0;
	unsigned long int B = 0;
	unsigned long int soma = 0;
    

	scanf("%lu %lu",&A,&B);
	if(A > 0 && A <= B && B > 0){
		for(int i = A; i <= B; i++){
			soma = soma + i;
		}
		printf("%lu",soma);
		printf("\n");
	}
return 0;
}
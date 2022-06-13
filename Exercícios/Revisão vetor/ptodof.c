#include <stdio.h>

int fun(int vetf[]){	
	int soma = 0;

	for(int i = 0; i < 10; i++){
		soma = soma + vetf[i]; 
	}

return soma;
}


int main(void){
	int vet[10] = {0,1,2,3,4,5,6,7,8,9};
	int soma = 0;
	soma = fun(vet);

    printf("%d\n", soma);
return 0;
}
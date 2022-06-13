#include<stdio.h>

void fun(int* x){
   *x = *x;
   
   return;
}

int main(void){
	int vet[10] = {0,1,2,3,4,5,6,7,8,9};
	
	fun(&vet[3]);
	
	printf("O terceiro elemento é: %d\n",vet[3]);
	

return 0;
}


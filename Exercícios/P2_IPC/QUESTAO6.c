#include <stdio.h>


int main(void){
	int A[10] = {0};
	int B[10] = {0};

	printf("Digite os elementos do primeiro vetor: \n");
	for(int i = 0; i < 10; i++){
		scanf("%d", &A[i]);
	}

	printf("Digite os elementos do segundo vetor: \n");
	for(int i = 0; i < 10; i++){
		scanf("%d", &B[i]);
	}


	for(int i = 0; i < 10; i++){
		if(A[i] != B[i]){
			printf("False\n");
			return 0;
		}
	}
		printf("True\n");

	return 0;
}



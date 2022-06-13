#include <stdio.h>

int main(void){
	int vet[2];

	scanf("%d %d", &vet[0], &vet[1]);
	
	while(vet[0] != 0 && vet[1]){
        if (vet[0] > 0 && vet[1] > 0){
            printf("primeiro\n");
        }
        else if (vet[0] < 0 && vet[1] > 0){
            printf("segundo\n");
        }
        else if (vet[0] < 0 && vet[1] < 0){
            printf("terceiro\n");
        }
        else{
        	printf("quarto\n");
        }
        scanf("%d %d", & vet[0], & vet [1]);
    }
return 0;
}


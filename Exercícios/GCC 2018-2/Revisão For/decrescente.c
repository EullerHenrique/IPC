#include <stdio.h>

int main(void){
	int limite = 0;
	printf("Digite o limite da contagem: ");
	scanf("%d", &limite);

	for(int i = limite; i >= 1; i--){
		printf("\t%d\n", i);
	}
return 0;
}

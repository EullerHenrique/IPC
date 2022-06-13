#include <stdio.h>

int main(void){
	int limite = 0;
	printf("Digite o limite da contagem: ");
	scanf("%d", &limite);

	for(int i = 1; i<= limite; i+=2){
		printf("\t%2d\t%2d\n",i, i + 1);
    }
return 0;
}
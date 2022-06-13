#include <stdio.h>

int main(void){
	int limite = 0;

	printf("Digite o limite da contagem: ");
	scanf("%d", &limite);

	for(int i = 1; i <= limite; i++){
		if(i % 2 != 0){
			printf("%d\n", i);
		}
	}
return 0;
}

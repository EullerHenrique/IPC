#include <stdio.h>
#include <string.h>

int main(void){
	int x = 0;// quantidade de casos testes
	char str1[7];
	char str2 [7];


	scanf("%d", &x);


	for(int i = 1; i <= x; i++){
		scanf("%s",str1);
		scanf("%s",str2);

		if((strcmp(str1,"ataque") == 0) && (strcmp(str2, "ataque") == 0)){
			printf("Aniquilacao mutua\n");
		}
		if((strcmp(str1,"pedra") == 0) && (strcmp(str2,"pedra") == 0)){
			printf("Sem ganhador\n");
		} 
		if((strcmp(str1,"papel") == 0) && (strcmp(str2,"papel") == 0)){
			printf("Ambos venceram\n");
		}
		if((strcmp(str1,"ataque") == 0) && (strcmp(str2,"papel") == 0)){
			printf("Jogador 1 venceu\n");
		}
		if((strcmp(str1,"papel") == 0) && (strcmp(str2,"ataque") == 0)){
			printf("Jogador 2 venceu\n");
		}
		if((strcmp(str1,"pedra") == 0) && (strcmp(str2,"papel") == 0)){
			printf("Jogador 1 venceu\n");
		}
		if((strcmp(str1,"papel") == 0) && (strcmp(str2,"pedra") == 0)){
			printf("Jogador 2 venceu\n");
		}
		if((strcmp(str1,"ataque") == 0) && (strcmp(str2,"pedra") == 0)){
			printf("Jogador 1 venceu\n");
		}
		if((strcmp(str1,"pedra") == 0) && (strcmp(str2,"ataque") == 0)){
			printf("Jogador 2 venceu\n");
		}
	}

return 0;
}

		
	


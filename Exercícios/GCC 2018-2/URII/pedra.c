#include <stdio.h>
#include <string.h>


int main(void){
	char str1[7];
	char str2[7];
	int n = 0;

	scanf("%d", &n);
	int casos[1000] = {0};

	if(n >= 1 && n <= 1000){
		for(int i = 1; i <= n; i++){

		scanf("%s",str1);
		scanf("%s",str2);

			if((strcmp(str1, "ataque") == 0) && (strcmp(str2, "ataque") == 0)){
				casos[i] = 1;
			}
			if((strcmp(str1,"pedra") == 0) && (strcmp(str2, "pedra") == 0)){
				casos[i] = 2;
			}
			if((strcmp(str1, "papel") == 0) && (strcmp(str2, "papel") == 0)){
				casos[i] = 3;
			}
			if((strcmp(str1, "papel") == 0) && (strcmp(str2, "ataque") == 0)){
				casos[i] = 5;
			}
			if((strcmp(str1, "ataque") == 0) && (strcmp(str2, "papel") == 0)){
				casos[i] = 4;
			}
			if((strcmp(str1, "papel") == 0) && (strcmp(str2, "pedra") == 0)){
				casos[i] = 5;
			}
			if((strcmp(str1, "pedra") == 0) && (strcmp(str2,"papel") == 0)){
				casos[i] = 4;
			}
			if((strcmp(str1,"pedra") == 0) && (strcmp(str2, "ataque") == 0)){
				casos[i] = 5;
			}
			if((strcmp(str1,"ataque") == 0) && (strcmp(str2,"pedra") == 0)){
				casos[i] = 4;
			}
		}

		for(int i = 1; i <= n; i++){
			if(casos[i] == 1){
				printf("Aniquilacao mutua\n");
 			}	
 			if(casos[i] == 2){
				printf("Sem ganhador\n");
			}	
			if(casos[i] == 3){
				printf("Ambos venceram\n");
			}
			if(casos[i] == 4){
				printf("Jogador 1 venceu\n");
			}
			if(casos[i] == 5){
				printf("Jogador 2 venceu\n");
			}
		}
	}	
return 0;
}



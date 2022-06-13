#include <stdio.h>

int main(void){

	int p = 0;  // escolha do jogador 1 (p = 1= par,p = 0 = ímpar)  
	int j1 = 0; // número escolhido pelo jogador 1
	int j2 = 0; // número escolhido pelo jogador 2
	int r = 0; // representa se o jogador 1 roubou (se r = 1 = roubou, se r = 0= não roubou)
	int a = 0; // representa se o jogador 2 acusou o roubo ( se a = 1 = jogador 2 acusou jogador 1 de roubo, se a = 0 = jogador 2 não acusou o jogador 1 de roubo)
	int soma = 0;

	scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
	soma = j1 + j2;
		
		if(p == 1){
			if (soma % 2 == 0 && r == 0 && a == 0){
			    printf("Jogador 1 ganha!\n");
			}else
			if (soma % 2 == 0 && r == 0 && a == 1){
				printf("Jogador 1 ganha!\n");
			}else
			if (soma % 2 == 0 && r == 1 && a == 1){
				printf("Jogador 2 ganha!\n");
			}else
			if(soma % 2 == 0 && r == 1 && a == 0){
				printf("Jogador 1 ganha!\n");
			}
		
			if (soma % 2 != 0 && r == 1 && a == 1){
				printf("Jogador 2 ganha!\n");
			}else 
			if(soma % 2 != 0 && r == 1 && a == 0){
				printf("Jogador 1 ganha!\n");
			}else 
			if(soma % 2 != 0 && r == 0 && a == 0){
				printf("Jogador 2 ganha!\n");
				}
        	}
	
		if(p == 0){
			if(soma % 2 != 0 && r == 0 && a == 0){
			    printf("Jogador 1 ganha!\n");
			}else
			if(soma % 2 != 0 && r == 0 && a == 1){
				printf("Jogador 1 ganha!\n");
			}else
			if(soma % 2 != 0 && r == 1 && a == 1){
				printf("Jogador 2 ganha!\n");
			}else
			if(soma % 2 != 0  && r == 1 && a == 0){
				printf("Jogador 1 ganha!\n");
			}

		
			if (soma % 2 == 0 && r == 1 && a == 1){
				printf("Jogador 2 ganha!\n");
			}else 
			if(soma % 2 == 0 && r == 1 && a == 0){
				printf("Jogador 1 ganha!\n");
			}else 
			if(soma % 2 == 0 && r == 0 && a == 0){
				printf("Jogador 2 ganha!\n");
			}
		}

return 0;
}





#include <stdio.h>
 
int main(void){
	int x = 0;
	int y = 0;
	int vet[1000] = {0};
	int casos[1000] = {0};

	scanf("%d %d", &x,&y);

		for(int i = 1; i <= 1000 && x != 0 && y != 0; i++){ 
			if( x > 0 && y > 0){
				casos[i] = 1;
			}
			if( x > 0 && y < 0){
				casos[i] = 2;
			}
			if( x < y && y < 0){
				casos[i] = 3;
			}
			if( x  < 0 && y > 0){
				casos[i] = 4;
			}
			scanf("%d %d", &x,&y);
		}


		for(int i = 1; i <= 1000; i++){
			if(casos[i] == 1){
				printf("primeiro\n");
			}
			if(casos[i] == 2){
				printf("quarto\n");
			}
			if(casos[i] == 3){
				printf("terceiro\n");
			}
			if(casos[i] == 4){
				printf("segundo\n");
			}
		}

return 0;
}
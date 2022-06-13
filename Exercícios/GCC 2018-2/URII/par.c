#include <stdio.h>

int main(void){

	int p = 0;
	int j1 = 0;
	int j2 = 0;
	int  r = 0;
	int  a = 0;
	int  ganhador = 0;
	int  soma = 0;

	scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    soma = j1 + j2;

			if((soma % 2 == 0 && p == 1) || (soma % 2 != 0 && p ==0)){ // calculos baseados no par e impar
			    ganhador = 1;
			}else
			if((soma % 2 != 0 && p == 1) || (soma % 2 == 0 && p ==0)){
				ganhador = 2;
			}
			
			if((r == 1 && a == 0) || (r == 0 && a == 1)){ // calculos baseados no roubo e acusação
					ganhador = 1;
			}else 
			if(r == 1 && a == 1){
					ganhador = 2;
		    }

printf("Jogador %d ganha!\n", ganhador);
return 0;
}
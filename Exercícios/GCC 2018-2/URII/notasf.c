#include <stdio.h>

int main(void){

	int notas [6] = {100,50,20,10,5,2};
	float moedas[6] = {1.00,0.50,0.25,0.10,0.05,0.01};
	int moedass[6] = {100,50,25,10,5,1};
	int valor = 0;
	int x = 0;
	int y = 0;

	scanf("%d.%d",&x,&y);

	printf("NOTAS:\n");
	for(int i = 0; i < 6; i++){
		if(x >= notas[i]){
			valor = x / notas[i];
			printf("%d nota(s) de R$ %d.00\n", valor, notas[i]);
			x = x - (valor * notas[i]);
		}else{
			printf("%d nota(s) de R$ %d.00\n", 0, notas[i]);
		}
	}

	y = x * 100 + y; 

	printf("MOEDAS:\n");
	for(int i = 0; i < 6; i++){
		if( y >= moedass[i]){
			valor = y / moedass[i];
			printf("%d moeda(s) de R$ %.2f\n", valor, moedas[i]);
			y = y - (valor * moedass[i]);
		}else{
			printf("%d moeda(s) de R$ %.2f\n", 0, moedas[i]);
		}
	}
	
return 0;
}

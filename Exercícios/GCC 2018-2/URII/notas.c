#include <stdio.h>

int main(void){
	int   notas[6] = {100,50,20,10,5,2};
	float moedas[6] = {1.00,0.50,0.25,0.10,0.05,0.01};
	int   moedass[6] = {100,50,25,10,5,1};
	int   valor = 0; 
	int   a = 0;
	int   b = 0;

	scanf("%d.%d", &a,&b);

	printf("NOTAS:\n");

	for(int i = 0; i < 6; i++){ // percorre o vetor de notas
		if(a >= notas[i]){
			valor = a / notas[i];
			printf("%d nota(s) de R$ %d.00\n",valor,notas[i]);
			a =  a - (valor * notas[i]);
		}
		else{
			printf("%d nota(s) de R$ %d.00\n",0,notas[i]);
		}

	}

	b = a * 100 + b; // 1.01 b = (1 * 100) + 1 = 101

	printf("MOEDAS:\n");
	for(int i = 0; i < 6; i++){
		if( b >= moedass[i]){ 
			valor = b / moedass[i]; // 101 / 100 = 1 ** 1 / 1 = 1
			printf("%d moeda(s) de R$ %.2f\n",valor,moedas[i]);
			b = b - (valor * moedass[i]); // 101 - (1 * 100) = 101 - 100 = 1 **  1 - ( 1 * 1) = 1 - 1 = 0
		}
		else{
			printf("%d moeda(s) de R$ %.2f\n",0,moedas[i]);
		}
	}
	return 0;
}

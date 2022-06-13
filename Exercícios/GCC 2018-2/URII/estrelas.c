#include <stdio.h>

int main(void){
	long long int x = 0;// numero de estrelas
	long long int r = 0; // numero de estrelas roubadas
	long long int c = 0;// numero de carneiros roubados
	long long aux = 0;
	long long soma = 0;

	scanf("%lli", &x);
	long long int ovelhas[x];


for(long long int i = 0; i < x; i++){ // vetor que lê todos os elemntos e soma todos os elementos.
	scanf("%lli", &ovelhas[i]);
	soma = soma + ovelhas[i];
}

for(long long int i = 0; i < x && i >= 0;){
	if(ovelhas[i] % 2 == 0){
		if(ovelhas[i] > 0){
			c = c + 1; // a quantidade de carneitos roubados aumenta
			ovelhas[i] = ovelhas[i] - 1; // rouba uma ovelha
		}
		i--;// percorre o vetor ao contrario

		if(aux == 0){// tal variavel serve para a quantidade de estelas roubadas ser contada apenas uma vez se o numero for par 
			r++;// aumenta a quantidade de estrelas roubadas
			aux = 1;// é 1 para esse if n ser mais executado
		}
	}
	
	if(ovelhas[i] % 2 != 0){
		c = c + 1; // a quantidade de carneiros roubados aumenta
		ovelhas[i] = ovelhas[i] - 1;// rouba uma ovelha
		i++;// percorre o vetor ordenamente
		r++;// aumenta a quantidade de estrelas roubadas
	}
}	

printf("%lli %lli\n",r, soma - c);
return 0;
}
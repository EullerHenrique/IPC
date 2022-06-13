#include <stdio.h>

int main (void){
	int x = 0;//quantidade de casos teste
	int n = 0; // numeros digitados pelo usuario 
	scanf("%d",&x);

	unsigned long long int Fib[60] = {0}; // vetor com 60 elementos que armazena numeros inteiro de 64 bit sem sinal

	Fib[0] = 0;
	Fib[1] = 1;

	for(int i = 2; i <= 60 ; i++){ // transforma todos os numeros entre 2 e 6 nos numeros da sequencia de fibonacci
		Fib[i] = Fib[i-1] + Fib[i-2];
	}

	for(int i = 1; i <= x; i++){ // l Lê todos os números digitados pelo usúario e os compara com a sequencia de fibonnaci calculada no for anterior. Cada caso teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.
		scanf("%d",&n);
		printf("Fib(%d) = %llu\n",n,Fib[n]);
	}

return 0;
}
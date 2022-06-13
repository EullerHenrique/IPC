#include <stdio.h>

int main(void){
	int T = 0; // quantidade de casos teste
	int N = 0; // números digitados pelo usúario
    scanf("%d", & T);// número de casos teste
    unsigned long long int Fib [60]; // número inteiro de 64 bit sem sinal
    
    Fib [0] = 0;
    Fib [1] = 1;
   
    
    for(int i = 2; i <= 60; i++){ // Tranforma todos os números entre 2 e 60 nos números da sequencia de fibonnaci e os coloca dentro do vetor
    	Fib[i] = Fib[i-1] + Fib[i-2];
    }
    
    for(int i = 1; i <= T; i++){ // Lê todos os números digitados pelo usúario e os compara com a sequencia de fibonnaci calculada no for anterior. Cada caso teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.
            scanf("%d", &N); // lê cada número
            printf("Fib(%d) = %llu\n", N, Fib[N]); // imprime o finonacci do no número lido
    }


return 0;
}

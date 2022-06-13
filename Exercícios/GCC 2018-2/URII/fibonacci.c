#include <stdio.h>

int main(void){
	int T = 0;
	int N = 0;
	scanf("%d", & T);

	unsigned long long int Fib[60];

	Fib [0] = 0;
	Fib [1] = 1;

	for(int i = 2; i <= 60; i++){
		Fib[i] = Fib[i - 1] + Fib[i -2];
	}

	for(int i = 1; i <= T; i++){
		scanf("%d", &N);
		printf("Fib(%d) = %llu\n",N,Fib[N]); // Acessa o vetor contendo o fibonacci, Ex : Fib[4] = 3
	}

return 0;
}
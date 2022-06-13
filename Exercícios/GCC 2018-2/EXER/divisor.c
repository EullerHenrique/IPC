#include <stdio.h>
int main(void){
	int N = 0;
	int X = 0;
    int i = 1;
    int soma = 0;
	
	scanf("%d", &N);
  

	while(N >= 1 && N <= 20){
          scanf("%d", & X);
        while(X % i == 0){
      	 soma = soma + i;
         i++; 
        if (soma == X){
   	      printf("%d eh perfeito\n", X);
        }
        else{
   	      printf("%d nao eh perfeito\n", X);
        }
        }  
    }
       N --;
      scanf("%d", & X);
return 0;
}

#include <stdio.h>
int main(void) {
	int n = 0;
	int x = 0;
	int soma = 0;
	int i = 1;
	int perfeito[n];
	int imperfeito[n];

    scanf("%d",&n);

	while(n >= 1 && n <= 20){
		scanf("%d", &x);
	    soma = 0;
	    i = 1;
	    while (i < x){
	    	if(x % i == 0){
	    		soma = soma + i;
	    	}
            i++;
	    }
	}   if (soma == x){
	       perfeito[i] = {x};
	       
        }
        else{
        	imperfeito[i] = {x};
        	

        }
        n --;

        printf("%d",perfeito[i]);
        printf("%d", imperfeito[i]);         
return 0;
}

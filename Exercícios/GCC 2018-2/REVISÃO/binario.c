#include <stdio.h>

int main(void){
	int n = 0;
	int bin[64] = {0};
	int i = 0;

	scanf("%d", &n);

	for(;n > 0;i++){
		bin[i] =  n % 2;
		n = n / 2;
	}
	
	i--;
	for(; i >= 0; i--){
		printf("%d",bin[i]);
	}
	printf("\n");
return 0;
}
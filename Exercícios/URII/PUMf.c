#include <stdio.h>

int main(void){
	int x = 0;

	scanf("%d", &x); // numero de linhas

	for(int i = 1; x > 0; x--){
		printf("%d %d %d PUM\n",i,i+1,i+2);
		i = i + 4;
	}

	return 0;
}

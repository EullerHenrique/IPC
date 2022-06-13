#include <stdio.h>

int main(void){

	int n = 0;

	scanf("%d",&n);

	for(int i = 1;n>0;n--){
		printf("%d %d %d PUM\n",i,i+1,i+2);
		i = i + 4;
	}

	return 0;
}













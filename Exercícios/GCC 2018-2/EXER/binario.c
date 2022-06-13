#include <stdio.h>

int main(void){
	int n = 0;
	int bin[64] = {0};
    int i = 0;

scanf("%d",&n);

while(n!= 0){
	bin[i] = n%2;
	n = n/2;
	i ++;
}

i--;

while(i >= 0){
	printf("%d",bin[i]);
	i --;
}
printf("\n");
}
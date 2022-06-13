#include <stdio.h>
int main(void){
int soma = 0;
int a = 0;

for(int i = 1; i <= 20; i++){
	scanf("%d", &a);
	soma += a;
}

printf("%d",soma);

return 0;
}

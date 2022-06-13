#include <stdio.h>
#include <string.h>

int main(void){
	int tamanho = 0;
	char str1[100]; 

	scanf("%s",str1);

		for(int i = 0; i < 51;i++){
			if(str1[i] ='z' || 'e' || 'l' || 'd' || 'a'){
				printf("Link bolado\n");
				return 0;
			}else{
				printf("Link tranquilo\n");
			}
		}
return 0;
}
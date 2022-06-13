#include <stdio.h>
#include <string.h>

int main(void){
	char str1[100]; 

	scanf("%s",str1);

	if(strcmp(str1,"zelda") == 0){
		printf("Link Bolado\n");
	}else{
		printf("Link Tranquilo\n");
	}

	return 0;
}
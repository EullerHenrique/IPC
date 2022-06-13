#include <stdio.h>
#include <string.h>


void inverte(char str1[], int tamanho){
	char temp;
	int j = tamanho - 1;

	for(int i = 0; i < j; i++){
		temp =  str1[i];
		str1[i] = str1[j];
		str1[j] = temp;
		j--;
	}
return;
}



int main(void){
	int n;
	int tamanho;
	char str1[1000];




	scanf("%d", &n);
	setbuf(stdin,NULL);


	for(int i = 0; i < n; i++){
		setbuf(stdin,NULL);
		scanf("%[^\n]s",str1);
		tamanho  = strlen(str1);
		for(int i = 0; i < tamanho; i++){
			if( (str1[i] >= 65 && str1[i] <= 90) || (str1[i] >= 97 && str1[i] <= 122) ){
				str1[i] = str1[i] + 3;  
			}
		}
		inverte(str1,tamanho);
		for(int i = 0; i < tamanho; i++){
			if(i > (int) tamanho/2 - 1){
				str1[i] = str1[i] - 1;  
			}
		}
		for(int i = 0; i < tamanho; i++){
			printf("%c",str1[i]);
		}
		printf("\n");
	}
































	
}
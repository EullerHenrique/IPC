#include <stdio.h>
#include <string.h>

int main(void){
	int leds = 0; 
	int tamanho = 0;
	int n = 0; // quantidade de casos testes
	char str1[101];

	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		scanf("%s",str1);
		leds = 0; // reinicia a quantidade de leds
		tamanho = strlen(str1);
		for(int i = 0; i < tamanho; i++){
			if(str1[i] == '1'){
				leds = leds + 2;
			}
			if(str1[i] == '2'){
				leds = leds + 5;
			}
			if(str1[i] == '3'){
				leds = leds + 5;
			}
			if(str1[i] == '4'){
				leds = leds + 4;
			}
			if(str1[i] == '5'){
				leds = leds + 5;
			}
			if(str1[i] == '6'){
				leds = leds + 6;
			}
			if(str1[i] == '7'){
				leds = leds + 3;
			}
			if(str1[i] == '8'){
				leds = leds + 7;
			}
			if(str1[i] == '9'){
				leds = leds + 6;
			}
			if(str1[i] == '0'){
				leds = leds + 6;
			}
		}
		printf("%d leds\n",leds);
	}
return 0;
}
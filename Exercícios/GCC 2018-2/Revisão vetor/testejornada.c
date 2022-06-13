#include <stdio.h>

int main(){

	int tamanho, carneiros_roubados=0;
	scanf("%d",&tamanho);

	int estrela[tamanho];
	int estrela_copia[tamanho];

	for(int i =0;i<tamanho;i++){
		scanf("%d",estrela[i]);
		estrela_copia[i] = estrela[i];
	}

	for(i=0;i<tamanho;){
		if(i>0){
			if(estrela_copia[i]>0){
				estrela_copia[i]--;
				carneiros_roubados++;
				if(estrela[i]%2!=0)
					i++;
				else
					i--;
			}
		}
		else
			break;
	}

	printf("%d\n", );
	
	return 0;
}
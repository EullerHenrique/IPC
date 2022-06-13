#include <stdio.h>

int main(void){
	long long int x = 0;// numero de estrelas
	long long int r = 0;// numero de estrelas roubadas
	long long int c = 0;//numero de carneiros roubados
	long long aux = 0;
	long long soma = 0;

	scanf("%lli",&x);
	long long int ovelhas[x];

	for(long long int i = 0; i < x; i++){
		scanf("%lli",&ovelhas[i]);
		soma = soma + ovelhas[i];
	}

	for(long long int i = 0; i < x && i >= 0;){
		if(ovelhas[i] % 2 == 0){
			if(ovelhas[i] > 0){
				c = c + 1;
				ovelhas[i] = ovelhas[i] - 1;
			}
			if(aux == 0){
				r++
				aux = 1;
			}
			i--;
		}


		if(ovelhas[i] % 2 != 0){
			c = c + 1;
			ovelhas[i] = ovelhas[i] - 1;
			i++;
			r++;
		}
	}
	printf("%lli % lli\n",soma - c);
return 0;
}
		}



	}






















}
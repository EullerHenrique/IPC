#include <stdio.h>
int main(void){
	int v[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (int i = 0; i < 3; i++) {

		for (int j = i * 3; j < (i * 3) + 3 ; j++) {

			printf("%d", v[j]);
			if (j < (i * 3) + 2){
				printf(", ");
			}

		}
		printf("\n");
	}


	return 0;
}

#include <stdio.h>
int main(void){
int lista[10] = {2, 1, 2, 1, 1, 2, 3, 2, 1, 2};
printf("%d\n", lista[2]);
printf("%d\n", lista[ lista[2] ]);
printf("%d\n", lista[ lista[2] + lista[3]]);
printf("%d\n", lista[ lista[ lista[2]]]);
return 0;
}
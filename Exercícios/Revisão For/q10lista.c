#include <stdio.h>
int estranho(int x, int y){
int t;
int z;
t = x + y;
z = x * y;
return (t + z);
} // estranho

int main(void){
int a;
int b;
int c;
int d;
int r;
int s;
int t;
int u;
int v;
scanf("%d %d %d %d", &a, &b, &c, &d);
r = estranho(a, b);
s = estranho(r, c);
t = estranho(estranho(s, d), estranho(4, 2));
u = estranho(t + 3, s + 2);
v = estranho(estranho(estranho(u, a), b), c);
printf("%d %d %d %d %d", r, s, t, u, v);
return 0;
} // main
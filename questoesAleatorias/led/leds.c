#include <stdio.h>
int main(){
	int t,a,b,c,d,e,f,g,h,i,j = 0;
	
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	t=0;
	
	printf("%d\n",t);
	
	//2 leds - 1
	//3 leds - 7
	//4 leds - 4
	//5 leds - 2,3,5
	//6 leds - 0,9,6
	//7 leds - 8
	
	t = (a == 1? t+2:(a == 7? t+3:(a == 4 ? t+4 :(a == 2 ||a == 3 || a == 5? t+5:(a == 0 || a == 9 || a == 6? t+6: t+7)))));
	printf("%d\n",t);
	t = (b == 1? t+2:(b == 7? t+3:(b == 4 ? t+4 :(b == 2 ||b == 3 || b == 5? t+5:(b == 0 || b == 9 || b == 6? t+6: t+7)))));
	printf("%d\n",t);
	t = (c == 1? t+2:(c == 7? t+3:(c == 4 ? t+4 :(c == 2 ||c == 3 || c == 5? t+5:(c == 0 || c == 9 || c == 6? t+6: t+7)))));
	printf("%d\n",t);
	t = (d == 1? t+2:(d == 7? t+3:(d == 4 ? t+4 :(d == 2 ||d == 3 || d == 5? t+5:(d == 0 || d == 9 || d == 6? t+6: t+7)))));
	printf("%d\n",t);
	t = (e == 1? t+2:(e == 7? t+3:(e == 4 ? t+4 :(e == 2 ||e == 3 || e == 5? t+5:(e == 0 || e == 9 || e == 6? t+6: t+7)))));
	printf("%d\n",t);
	t = (f == 1? t+2:(f == 7? t+3:(f == 4 ? t+4 :(f == 2 ||f == 3 || f == 5? t+5:(f == 0 || f == 9 || f == 6? t+6: t+7)))));
	printf("%d\n",t);
	t = (g == 1? t+2:(g == 7? t+3:(g == 4 ? t+4 :(g == 2 ||g == 3 || g == 5? t+5:(g == 0 || g == 9 || g == 6? t+6: t+7)))));
	printf("%d\n",t);
	t = (h == 1? t+2:(h == 7? t+3:(h == 4 ? t+4 :(h == 2 ||h == 3 || h == 5? t+5:(h == 0 || h == 9 || h == 6? t+6: t+7)))));
	printf("%d\n",t);
	t = (i == 1? t+2:(i == 7? t+3:(i == 4 ? t+4 :(i == 2 ||i == 3 || i == 5? t+5:(i == 0 || i == 9 || i == 6? t+6: t+7)))));
	printf("%d\n",t);
	t = (j == 1? t+2:(j == 7? t+3:(j == 4 ? t+4 :(j == 2 ||j == 3 || j == 5? t+5:(j == 0 || j == 9 || j == 6? t+6: t+7)))));
	printf("%d\n",t);
		
return 0;
}
#include<stdio.h>
int main() {
	char texto[11];
	
	
	printf("\n---------------------\n IMPAR\n---------------------\n\n");
	
	int par,n1 = 0;
	printf("Digite um Inteiro.\n");
	scanf("%d",&n1);
	
	par = ((n1%2) == 0? 1 : 0 );
			
	printf("E impar: %s\n", (!par? "true" : "false"));
	
	return 0;
}	
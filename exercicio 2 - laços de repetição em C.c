#include <stdio.h>

void main (void) {
	int num, cont = 0;
	
	printf (" Algoritmo que informa quantos numeros impares foram informados, e se encerra ao ser informado o numero: -999 \n");
	
	do {
		printf ("\n Informe um numero inteiro: ");
		scanf  ("%d", &num);
		
		if (num % 2 != 0) {
			cont++;
		}
	} while (num != -999);
	
	printf ("\n Quantidade de numeros impares informados: %d", cont);
	
	getch();
}

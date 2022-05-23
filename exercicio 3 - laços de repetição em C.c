#include <stdio.h>

void main (void) {
	
	int cont = 0;
	float numero, media, total = 0;

	printf (" Algoritmo que recebe varios numeros, informa a soma, a media e quantos numeros foram informados, sendo encerrado ao ser informado um numero negativo \n\n");
	printf (" Informe um numero: ");
	scanf  ("%f", &numero);

	while (numero >= 0) {

		cont++;
		total = total + numero;

		printf(" Informe um numero: ");
		scanf("%f", &numero);

	}

	media = total / cont;
		
	printf ("\n A soma dos numeros informados eh %.2f \n", total);
	printf ("\n A media dos numeros informados eh %.2f \n", media);
	printf ("\n Foram informados %d numeros no total \n", cont);
	
	getch();
}


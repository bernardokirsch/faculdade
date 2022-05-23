#include <stdio.h>

void main (void) {
	int pedido;
	
	printf ("Escolha o seu pedido, e digite o codigo do mesmo: \n");
	printf ("10 - Xis Completo \n");
	printf ("11 - Xis Bacon \n");
	printf ("12 - Xis de Coracao de Boi \n");
	printf ("13 - Xis de Charque \n");
	printf ("14 - Xis de Ovelha \n");
	printf ("15 - Xis de Linguica Campeira \n\n");
	
	scanf ("%d", &pedido);
	
	switch (pedido) {
		case 10:
			printf ("\nSeu pedido eh um Xis Completo \n");
			printf ("Valor total: R$ 12,00");
		break;
		case 11:
			printf ("\nSeu pedido eh um Xis Bacon \n");
			printf ("Valor total: R$ 16,50");
		break;
		case 12:
			printf ("\nSeu pedido eh um Xis de Coracao de Boi \n");
			printf ("Valor total: R$ 14,00");
		break;
		case 13:
			printf ("\nSeu pedido eh um Xis de Charque \n");
			printf ("Valor total: R$ 14,50");
		break;
		case 14:
			printf ("\nSeu pedido eh um Xis de Ovelha \n");
			printf ("Valor total: R$ 20,90");
		break;
		case 15:
			printf ("\nSeu pedido eh um Xis de Linguica Campeira \n");
			printf ("Valor total: R$ 18,00");
		break;
		default:
			printf ("\nOpcao invalida");
		break;
	}

	getch ();
	
}

#include <stdio.h>

void main (void) {
	int num1, num2, num3;
	
	printf ("Informe tres numeros: \n");
	scanf  ("%d", &num1);
	scanf  ("%d", &num2);
	scanf  ("%d", &num3);
	
	if (num1 >= num2 && num2 >= num3) {
		printf ("%d - %d - %d", num3, num2, num1);
	}
	else if (num1 >= num3 && num3 >= num2) {
		printf ("%d - %d - %d", num2, num3, num1);
	}
	else if (num2 >= num1 && num1 >= num3) {
		printf ("%d - %d - %d", num3, num1, num2);
	}
	else if (num2 >= num3 && num3 >= num1) {
		printf ("%d - %d - %d", num1, num3, num2);
	}
	else if (num3 >= num1 && num1 >= num2) {
		printf ("%d - %d - %d", num2, num1, num3);
	}
	else {
		printf ("%d - %d - %d", num1, num2, num3);
	}
		
	getch ();
}

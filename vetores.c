#include <stdio.h>
#include <locale.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	float x [6], y [6];
	
	for (i = 0; i < 6; i++) {
		printf ("\n Informe um número: ");
		scanf ("%f", &x[i]);
	}
	
	for (i = 0; i < 6; i++) {
		if (i % 2 == 0) {
			y [i] = x [i + 1];
		}
		else {
			y [i] = x [i - 1];
		}
	}
	
	for (i = 0; i < 6; i++) {
		printf ("\n X: %.1f  ", x [i]);
		printf (" Y: %.1f  \n", y [i]);
	}
	
	getch ();

}

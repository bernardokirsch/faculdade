#include <stdio.h>

void main (void) {
	int num;
	
	scanf ("%d", &num);
	
	if (num <= 10) {
		printf ("\nF1");
	}
	if (num > 10 && num <=100) {
		printf ("\nF2");
	}
	if (num > 100) {
		printf ("\nF3");
	}
	
	getch ();
	
}

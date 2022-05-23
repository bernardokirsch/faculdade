#include <stdio.h>

void main (void) {
	float nota1, nota2, media;
	
	printf ("\nInforme as duas notas do aluno: \n");
	scanf  ("%f", &nota1);
	scanf  ("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if (media <= 4.9) {
		printf ("Sua media final eh %.1f, com conceito INSUFICIENTE", media);
	}
	else if (media >= 5 && media <= 6.4) {
		printf ("Sua media final eh %.1f, com conceito REGULAR", media);
	}
	else if (media >= 6.5 && media <= 8.4) {
		printf ("Sua media final eh %.1f, com conceito BOM", media);
	}
	else {
		printf ("Sua media final eh %.1f, com conceito OTIMO", media);
	} 
	
	getch ();
}

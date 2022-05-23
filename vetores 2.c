#include <stdio.h>
#include <locale.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int i, num3 [10];
	float num1 [10], num2 [10];
	
	for (i = 0; i < 10; i++) {
		printf ("\n Informe um valor para o primeiro vetor: ");
		scanf  ("%f", &num1[i]);
	}
	
	for (i = 0; i < 10; i++) {
		printf ("\n Informe um valor para o segundo vetor: ");
		scanf  ("%f", &num2[i]);
	}
	
	for (i = 0; i < 10; i++) {
		if (num1 [i] == num2 [i]) {
			num3 [i] = 1;
		}
		else {
			num3 [i] = 0;
		}
	}
	
	for (i = 0; i < 10; i++) {
		printf ("\n O valor da posição %d do terceiro vetor é: %d \n", i, num3 [i]);
	}
	
	getch ();
}

#include <stdio.h>

void main (void) {
	float numero1, numero2, quociente, dividendo, divisor, resto_da_divisao;
	
	printf ("\n Informe o primeiro numero: ");
	scanf  ("%f", &numero1);

	printf ("\n Informe o segundo numero: ");
	scanf  ("%f", &numero2);
	
	quociente = numero1 / numero2;
	dividendo = numero1;
	divisor = numero2;
	resto_da_divisao = numero1 % numero2;  // não consegui, pois o resto da divisão só funciona com numeros inteiros
	
	printf ("\n O divisor da operacao eh: %f, o dividendo eh: %f, o quociente eh: %f, e o resto da divisao eh: %f", divisor, dividendo, quociente, resto_da_divisao);
	
	getch ();
}

#include <stdio.h>

void main (void) {
	float ht, vh, pd, sb, td, sl;

	printf ("\n Informe as horas trabalhadas no mes: ");
	scanf  ("%f", &ht);
	
	printf ("\n Informe o valor da hora trabalhada: ");
	scanf  ("%f", &vh);
				
	printf ("\n Informe o valor percentual de desconto: ");
	scanf  ("%f", &pd);
	
	sb = ht * vh;
	
	td = (pd / 100) * sb;
	
	sl = sb - td;
	
	printf ("\n O numero de horas trabalhadas eh: %.2f, o salario bruto eh: %.2f, o desconto eh de: %.2f e o salario liquido eh de: %.2f", ht, sb, td, sl);
	getch ();
	
}

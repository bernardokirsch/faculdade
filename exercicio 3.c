/*
Autor: Bernardo Gularte Kirsch
03) Faça um programa que leia 4 valores reais e mostre na tela o menor e o maior número informados.
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	float num1, num2, num3, num4;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf (" Informe 4 números reais: \n\n");
	scanf  (" %f", &num1);
	scanf  (" %f", &num2);
	scanf  (" %f", &num3);
	scanf  (" %f", &num4);
	
	if (num1 == num2 && num1 == num3 && num1 == num4) {
		printf ("\n Os números são todos iguais (%.2f)", num1);
	}
	else if (num1 <= num2 && num1 <= num3 && num1 <= num4) {
		printf ("\n O menor número é %.2f", num1);
	}
	else if (num2 < num1 && num2 <= num3 && num2 <= num4) {
		printf ("\n O menor número é %.2f", num2);
	}
	else if (num3 < num1 && num3 < num2 && num3 <= num4) {
		printf ("\n O menor número é %.2f", num3);
	}
	else if (num4 < num1 && num4 < num2 && num4 < num3) {
		printf ("\n O menor número é %.2f", num4);
	}
	
	if (num1 == num2 && num1 == num3 && num1 == num4) {
		/* Nenhuma instrução, pois o mesmo código já foi executado anteriormente */
	}
	else if (num1 >= num2 && num1 >= num3 && num1 >= num4) {
		printf (" e o maior é %.2f", num1);
	}
	else if (num2 > num1 && num2 >= num3 && num2 >= num4) {
		printf (" e o maior é %.2f", num2);
	}
	else if (num3 > num1 && num3 > num2 && num3 >= num4) {
		printf (" e o maior é %.2f", num3);
	}
	else if (num4 > num1 && num4 > num2 && num4 > num3) {
		printf (" e o maior é %.2f", num4);
	}
	
	getch ();
}

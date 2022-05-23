/*
Autor: Bernardo Gularte Kirsch
04) Crie um programa em C que receba o valor do sal�rio e calcule o aumento salarial conforme as regras abaixo:
	a. Se o sal�rio < R$ 1.500,00: aumento de 15%
	b. Se R$ 1.500,00 <= sal�rio < R$ 1.750,00: aumento de 12%
	c. Se R$ 1.750,00 <= sal�rio < R$ 2.000,00: aumento de 10%
	d. Se R$ 2.000,00 <= sal�rio < R$ 3.000,00: aumento de 7%
	e. Se sal�rio > R$ 3.000,00: aumento de 5%
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	float salario, salario_novo;

	setlocale (LC_ALL, "Portuguese");
	
	printf (" Informe seu sal�rio para calcular o aumento salarial: ");
	scanf  ("%f", &salario);
	
	if (salario < 1500) {
		salario_novo = salario + (salario * 15) / 100;
		printf ("\n O seu sal�rio ap�s o aumento (15%%) � de R$ %.2f", salario_novo);
	}
	else if (salario >= 1500 && salario < 1750) {
		salario_novo = salario + (salario * 12) / 100;
		printf ("\n O seu sal�rio ap�s o aumento (12%%) � de R$ %.2f", salario_novo);
	}
	else if (salario >= 1750 && salario < 2000) {
		salario_novo = salario + (salario * 10) / 100;
		printf ("\n O seu sal�rio ap�s o aumento (10%%) � de R$ %.2f", salario_novo);
	}
	else if (salario >= 2000 && salario < 3000) {
		salario_novo = salario + (salario * 7) / 100;
		printf ("\n O seu sal�rio ap�s o aumento (7%%) � de R$ %.2f", salario_novo);
	}
	else {
		salario_novo = salario + (salario * 5) / 100;
		printf ("\n O seu sal�rio ap�s o aumento (5%%) � de R$ %.2f", salario_novo);
	}
	
	getch ();
}

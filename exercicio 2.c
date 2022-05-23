/* 
Autor: Bernardo Gularte Kirsch
02) Escreva um programa em C para ler uma data no formato dd/mm/aaaa (exemplo: 12/05/2020). O programa
deve apresentar a data informada com o nome do mês por extenso.
Exemplo: 
		12 de maio de 2020	
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	int dia, mes, ano;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf (" Informe uma data no formato dd/mm/aaaa: ");
	scanf  ("%d/%d/%d", &dia, &mes, &ano);
	
	switch (mes) {
		
		case 1:
			printf ("\n %d de janeiro de %d", dia, ano);
		break;
		
		case 2:
			printf ("\n %d de fevereiro de %d", dia, ano);
		break;
		
		case 3:
			printf ("\n %d de março de %d", dia, ano);
		break;
		
		case 4:
			printf ("\n %d de abril de %d", dia, ano);
		break;
		
		case 5:
			printf ("\n %d de maio de %d", dia, ano);
		break;
		
		case 6:
			printf ("\n %d de junho de %d", dia, ano);
		break;
		
		case 7:
			printf ("\n %d de julho de %d", dia, ano);
		break;
		
		case 8: 
			printf ("\n %d de agosto de %d", dia, ano);
		break;
		
		case 9:
			printf ("\n %d de setembro de %d", dia, ano);
		break;
		
		case 10:
			printf ("\n %d de outubro de %d", dia, ano);
		break;
		
		case 11:
			printf ("\n %d de novembro de %d", dia, ano);
		break;
		
		case 12: 
			printf ("\n %d de dezembro de %d", dia, ano);
		break;
		
	}
	
	getch ();
	
}

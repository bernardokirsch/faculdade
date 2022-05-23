#include <stdio.h>
#include <locale.h>

void areaTri () {
	float  baseTri, altTri, area;
	printf ("\n Informe a medida da base do triângulo em cm: ");
	scanf  ("%f", &baseTri);
	printf ("\n Informe a medida da altura do triângulo em cm: ");
	scanf  ("%f", &altTri);
	area = (baseTri * altTri) / 2;
	printf ("\n A área do triângulo é %.2f cm", area);
}

void areaQuad () {
	float  baseQuad, altQuad, area;
	printf ("\n Informe a medida da base do quadrado em cm: ");
	scanf  ("%f", &baseQuad);
	printf ("\n Informe a medida da altura do quadrado em cm: ");
	scanf  ("%f", &altQuad);
	area = baseQuad * altQuad;
	printf ("\n A área do quadrado é %.2f cm", area);
}

void areaCir () {
	float  raioCir, area;
	printf ("\n Informe raio do círculo em cm: ");
	scanf  ("%f", &raioCir);
	area = 3.14 * (raioCir * raioCir);
	printf ("\n A área do círculo é %.2f cm", area);
}

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int op;
	
	printf ("\n -----> CALCULADORA DE ÁREAS <----- \n");
	printf ("\n Digite 1 - Área de um triângulo");
	printf ("\n Digite 2 - Área de um quadrado");
	printf ("\n Digite 3 - Área de um círculo");
	printf ("\n Digite 0 - Para sair");
	printf ("\n\n Digite a opção para realizar o cálculo de sua área: ");
	scanf  ("%d", &op);
	
	switch (op) {
		case 1: 
			printf ("\n -> ÁREA DE UM TRIÂNGULO <- \n ");
			areaTri ();
		break;
	
		case 2:
			printf ("\n -> ÁREA DE UM QUADRADO <- \n ");
			areaQuad ();
		break;
		
		case 3: 
			printf ("\n -> ÁREA DE UM CÍRCULO <- \n ");
			areaCir ();
		break;
		
		case 0: 
			printf ("\n VOCÊ SAIU!");
		break;
		
		default: 
			printf ("\n OPÇÃO INVÁLIDA!");
		break;
	}
	
	getch ();
}


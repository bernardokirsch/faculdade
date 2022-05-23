#include <stdio.h>
#include <locale.h>

void areaTri () {
	float  baseTri, altTri, area;
	printf ("\n Informe a medida da base do tri�ngulo em cm: ");
	scanf  ("%f", &baseTri);
	printf ("\n Informe a medida da altura do tri�ngulo em cm: ");
	scanf  ("%f", &altTri);
	area = (baseTri * altTri) / 2;
	printf ("\n A �rea do tri�ngulo � %.2f cm", area);
}

void areaQuad () {
	float  baseQuad, altQuad, area;
	printf ("\n Informe a medida da base do quadrado em cm: ");
	scanf  ("%f", &baseQuad);
	printf ("\n Informe a medida da altura do quadrado em cm: ");
	scanf  ("%f", &altQuad);
	area = baseQuad * altQuad;
	printf ("\n A �rea do quadrado � %.2f cm", area);
}

void areaCir () {
	float  raioCir, area;
	printf ("\n Informe raio do c�rculo em cm: ");
	scanf  ("%f", &raioCir);
	area = 3.14 * (raioCir * raioCir);
	printf ("\n A �rea do c�rculo � %.2f cm", area);
}

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int op;
	
	printf ("\n -----> CALCULADORA DE �REAS <----- \n");
	printf ("\n Digite 1 - �rea de um tri�ngulo");
	printf ("\n Digite 2 - �rea de um quadrado");
	printf ("\n Digite 3 - �rea de um c�rculo");
	printf ("\n Digite 0 - Para sair");
	printf ("\n\n Digite a op��o para realizar o c�lculo de sua �rea: ");
	scanf  ("%d", &op);
	
	switch (op) {
		case 1: 
			printf ("\n -> �REA DE UM TRI�NGULO <- \n ");
			areaTri ();
		break;
	
		case 2:
			printf ("\n -> �REA DE UM QUADRADO <- \n ");
			areaQuad ();
		break;
		
		case 3: 
			printf ("\n -> �REA DE UM C�RCULO <- \n ");
			areaCir ();
		break;
		
		case 0: 
			printf ("\n VOC� SAIU!");
		break;
		
		default: 
			printf ("\n OP��O INV�LIDA!");
		break;
	}
	
	getch ();
}


#include <stdio.h>

void main (void) {
	float teste;
	
	printf ("\n Estes sao os tipos primitivos disponiveis na linguagem C e seu espaco ocupado na memoria: \n");
	printf ("\n char: %d bytes \n", sizeof(char));
	printf ("\n short: %d bytes \n", sizeof(short));
	printf ("\n int: %d bytes \n", sizeof(int));
	printf ("\n long: %d bytes \n", sizeof(long));
	printf ("\n float: %d bytes \n", sizeof(float));
	printf ("\n double: %d bytes \n", sizeof(double));
	printf ("\n long double: %d bytes \n", sizeof(long double));
	
	printf ("\n O tamanho do teste eh: %d bytes \n\n", sizeof teste);
	
	getch ();
	
}

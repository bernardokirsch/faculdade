#include <stdio.h>
#include <locale.h>
#include <time.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	srand (time(NULL));
	
	int i, j;
	int matriz[2][3], transposta[3][2];
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf ("\n Informe o elemento [%d][%d] da matriz: ", i, j);
			scanf  ("%d", &matriz[i][j]);
		}
	}
	
	printf ("\n MATRIZ 2x3 \n");
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf ("  %d", matriz[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n MATRIZ TRANSPOSTA \n");

	for (i = 0; i < 3; i++) {
    	for (j = 0; j < 2; j++) {
        	transposta[i][j] = matriz[j][i];
    }
}
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf ("  %d", transposta[i][j]);
		}
		printf ("\n");
	}
	
	getch();
}

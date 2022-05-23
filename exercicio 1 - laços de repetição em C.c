#include <stdio.h>

void main (void) {
	int alunos;
	float nota1, nota2, nota3, media;
	
	printf ("Calculadora para media de 3 notas de 20 alunos \n\n");
	
	for (alunos = 1; alunos <= 20; alunos++) {
	
		printf ("Informe as tres notas do aluno %d: \n\n", alunos);
		scanf  ("%f", &nota1);
		scanf  ("%f", &nota2);
		scanf  ("%f", &nota3);
	
		media = (nota1 + nota2 + nota3) / 3;
		
		printf ("\nA nota media do aluno %d eh: %f \n\n", alunos, media);
	}
	
	printf ("\nAs medias dos alunos foram realizadas");
	
	getch();
}

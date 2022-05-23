#include <stdio.h>

void main (void) {
	float v_km, v_ms;
	
	printf ("\n Informe a velocidade do veiculo em km/h: ");
	scanf  ("%f", &v_km);
	
	v_ms = v_km / 3.6;
	
	printf ("\n A velocidade em m/s eh: %f", v_ms);
	
	getch ();
	
}

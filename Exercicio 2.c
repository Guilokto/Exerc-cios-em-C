//Fornecido o valor de T, calcule o valor de W, sabendo que W = 2T + 4Y � 3X  onde X = 2T � 4  e  Y = T/2  + 4.

#include <stdio.h>
main()
{
	float t,w;
	int  X,Y;
	printf("Insira o valor de T: ");
	scanf("%f",&t);
	X=t*2-4;
	Y=t/2+4;
	w=(t*2 + Y*4) - X*3;
	printf("O valor de W e: %.2f  ",w);
	
	
	
	
	
}

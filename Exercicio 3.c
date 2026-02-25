//Fornecido o valor de um dos lados de um quadrado, calcule e exiba a sua área e perímetro. A=L P=L*4

#include <stdio.h>
main()
{
	float a,l,p;
	printf("Insira o Lado do quadrado: ");
	scanf("%f",&l);
	a=l*l;
	p=l*4;
	printf("A area do do quadrado e : %.2f \ne o perimetro e : %.2f",a,p);
	
}

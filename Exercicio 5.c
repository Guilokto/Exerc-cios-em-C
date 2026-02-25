// Fornecido duas notas de um aluno e seus respectivos pesos, calcule e exiba a média ponderada das notas
#include <stdio.h>
main()
{
	float n1,n2,m,p1,p2;
	printf("Insira a primeira nota: ");
	scanf ("%f",&n1);
	printf("Insira a peeso da priemira nota: ");
	scanf ("%f",&p1);
	printf("Insira a segunda nota: ");
	scanf ("%f",&n2);
	printf("Insira a peeso da segunda nota: ");
	scanf ("%f",&p2);
	m = (n1*p1 + n2*p2) / (p1 + p2);
	printf("A nota ponderada e: %.2f ",m);
}

#include<stdio.h>

int main(){
	float numeros[10], n_pos[10];
	float n_neg[10];
	int i, maior, menor, r = 0, contador = 0, contador1 = 0;
	
	for(i = 0; i < 10; i++)
	{
		printf("Introduza 10 numeros: ");
		scanf(" %f", &numeros[i]);
	}
	
	
	for(i = 0; i < 10; i++)
	{
		if(0 <= numeros[i])
		{
			n_pos[i] = numeros[i];
			contador++;
		}
		if(0 > numeros[i])
		{
			n_neg[i] = numeros[i];
			contador1++;
		}
	}
	
	printf("\nNumeros inseridos ");
	
	for(i = 0; i < 10; i++)
	{
		printf("\t%.2f", numeros[i]);
	}
	
	printf("\nNumeros positivos: ");
	
	for(i = 0; i < contador; i++)
	{
		printf("\t%.2f", n_pos);
	}
	
	printf("\nNumeros negativos: ");
	
		for(i = 0; i < contador1; i++)
	{
		printf("\t%.2f", n_neg);
	}
}

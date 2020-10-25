/*1. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), 
escreva a distância entre eles. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(void)
{
	float x1=0,x2=0,y1=0,y2=0,res=0;
	
	printf("Insira o Valor de x1: ");
	scanf("%f",&x1);
	printf("Insira o Valor de y1: ");
	scanf("%f",&y1);
	printf("Insira o Valor de x2: ");
	scanf("%f",&x2);
	printf("Insira o Valor de y2: ");
	scanf("%f",&y2);
	
	res = sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
	
	printf("Distancia: %f",res);
	
	return 0;
	
	
}

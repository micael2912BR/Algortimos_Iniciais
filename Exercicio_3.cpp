// Exercício 3, da lista em *.html

#include<stdio.h>
#include<conio.h>

int main(void)
{
	int Anos=0, Meses=0, Dias=0, Res=0;
	
	printf("Insira sua Idade em Anos: ");
	scanf("%d",&Anos);
	printf("Insira sua Idade em Meses: ");
	scanf("%d",&Meses);
	printf("Insira sua Idade em Dias: ");
	scanf("%d",&Dias);
	
	Res = Anos * 365;
	Res = (Res)+(Meses*30);
	Res = Res + Dias;
	
	printf("Resultado em Dias: %d ",Res);

	
	
}

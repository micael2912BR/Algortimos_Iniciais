// Exercício 2, da lista em *.html

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main (void)
{
	int a=0,b=0,c=0;
	int r=0,s=0,d=0;
	
	printf("************** Exercicio 2 **************\n\n");
	
	printf("Insira o valor de A: ");
	scanf("%d",&a);
	printf("Insira o valor de B: ");
	scanf("%d",&b);
	printf("Insira o valor de C: ");
	scanf("%d",&c);
	
	r = pow(a+b,2);
	printf("Valor de R: %d\n",r);
	s = pow(b+c,2);
	printf("Valor de S: %d\n",s);
	d = ((r+s)/2);
	printf("Valor de D: %d\n",d);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//Declaração
	float numero1;
	float numero2;
	float total;
	char continuar;
	continuar='s';
	
//Código
	while(continuar=='s')
	{
		printf ("digite um valor para o numero 1:");
		scanf("%f",&numero1);
		printf ("digite um valor para o numero 2:");
		scanf("%f",&numero2);
		total = numero1/numero2;
		printf("Total: %f\n",total);
		printf ("\nDeseja continuar? [s/n]");
		scanf("%s",&continuar);
	}
}

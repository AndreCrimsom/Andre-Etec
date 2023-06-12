#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float main()
{
//Declaração
	float cot;
	float dol;
	float real;
	char opcao;
	opcao = 's';
	dol = 5;

//Código
	while(opcao == 's')
	{
		dol = 5;
		printf ("Bem vindo. Insira a cotacao do dolar por favor\n");
		scanf ("%f",&cot);
		
		while(dol < 10)
		{
		printf ("Insira o valor em dolares maior que 10\n");
		scanf ("%f",&dol);
		}
		
		real = cot*dol;
		printf ("O valor em reais e: %f\n\n",real);
		
		printf ("Deseja realizar outra operacao? [s/n]");
		scanf ("%s",&opcao);
	}
	return 0;
}

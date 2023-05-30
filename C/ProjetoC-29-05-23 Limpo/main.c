#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
//Declaração
	int numero1;
	int numero2;
	int total;
//Código
	printf("Digite um valor para o numero 1\n");
	scanf("%d" ,&numero1);
	printf("Digite um valor para o numero 2\n");
	scanf("%d" ,&numero2);
	total = numero1+numero2;
	printf("total: %d\n", total);
//IF (Se, senão)
	if(total<10){
		printf("Seu resultado e menor que 10");
	}
	else {
		if (total==10){
			printf("Seu resultado e igual a 10");
		}
		else {
			printf("Seu resultado e maior que 10");
		}

	}
}

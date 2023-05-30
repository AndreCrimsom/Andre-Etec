#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// E/S I/O
//Comentario de linha
/*
comentario de bloco
1
2
345464564
*/

 main() {
//Declaração
	int numero1;
	int numero2;
	int total;
	numero2 = 15;
//Código
	printf("Digite um valor para o numero 1");
	scanf("%d",&numero1);
	printf("Digite um valor para o numero 2");
	scanf("%d",&numero2);
	total = numero1+numero2;
	printf("total: %d\n", total);
	//IF (Se, senão)
	if(total<10){
		printf("Não consegue nem somar dois numeros pra dar 10...");
	}
	else {
	
 		printf("Parabens. As vezes sua inteligencia me impressiona");
 	}
 }
 
 //Experimentos Bobos (Cuidado)
 
 /*
  main() {

	printf("\n\nIn the Benigning\n");
	printf("Capybara desu ne\n");
	printf("As arveres somos nozes");
 }
 */
 
 /*
  main() {
//Declaração
	int numero1;
	int numero2;
	int total;
	numero2 = 15;
//Código
	printf("Digite um valor para o numero 1");
	scanf("%d",&numero1);
//	printf("Digite um valor para o numero 2");
//	scanf("%d",&numero2);
	total = numero1+numero2;
	printf("total: %d", total);

 }
 */
 /*
  main() {
//Declaração
	int numero1;
	int numero2;
	int total;
	numero2 = 15;
//Código
	printf("Digite um valor para o numero 1");
	scanf("%d",&numero1);
//	printf("Digite um valor para o numero 2");
//	scanf("%d",&numero2);
	total = numero1+numero2;
	printf("total: %d", total);

 }
 */

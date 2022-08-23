#include <stdio.h>
#include <locale.h>

main() {

	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int qtdatual, qtdmin, qtdmax;
	float qtdmed;
	
	//entrada de dados
	printf("Insira a quantidade atual em estoque: \n");
	scanf("%i", &qtdatual);
	printf("Insira a quantidade mínima em estoque: \n");
	scanf("%i", &qtdmin);
	printf("Insira a quantidade máxima em estoque: \n");
	scanf("%i", &qtdmax);
	
	//operações
	qtdmed = (qtdmin + qtdmax)/2;
	if (qtdatual >= qtdmed) {
		printf("Não efetuar compra.\n");
	}
	if (qtdatual < qtdmed){
		printf("Efetuar compra.");
	}

}

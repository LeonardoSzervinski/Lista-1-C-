#include <stdio.h>
#include <locale.h>

main() {

	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int qtdatual, qtdmin, qtdmax;
	float qtdmed;
	
	//entrada de dados
	printf("Insira a quantidade atual em estoque: \n");
	scanf("%i", &qtdatual);
	printf("Insira a quantidade m�nima em estoque: \n");
	scanf("%i", &qtdmin);
	printf("Insira a quantidade m�xima em estoque: \n");
	scanf("%i", &qtdmax);
	
	//opera��es
	qtdmed = (qtdmin + qtdmax)/2;
	if (qtdatual >= qtdmed) {
		printf("N�o efetuar compra.\n");
	}
	if (qtdatual < qtdmed){
		printf("Efetuar compra.");
	}

}

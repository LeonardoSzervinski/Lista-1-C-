#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�vei locais
	float num;
	
	//entrada de dados
	printf("Digite um numero:\n");
	scanf("%d", &num);

	
	//opera��es
	if (num >= 0){
		printf("Positivo.");
	}
	if (num < 0){
		printf("Negativo");
	}
	
}

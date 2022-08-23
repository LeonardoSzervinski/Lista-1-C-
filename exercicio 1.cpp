#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variávei locais
	float num;
	
	//entrada de dados
	printf("Digite um numero:\n");
	scanf("%d", &num);

	
	//operações
	if (num >= 0){
		printf("Positivo.");
	}
	if (num < 0){
		printf("Negativo");
	}
	
}

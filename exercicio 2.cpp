#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variávei locais
	int num;
	float total;
	
	//entrada de dados
	printf("Digite a quantidade de maças:\n");
	scanf("%i", &num);

	
	//operações
	if (num >= 12){
		total = (num * 1.00);
		printf("O valor da compra é: %f", total);
	}
	if (num < 12){
		total = (num * 1.30);
		printf("O valor da compra é: %f2n", total);
	}
	
}

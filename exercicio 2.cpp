#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�vei locais
	int num;
	float total;
	
	//entrada de dados
	printf("Digite a quantidade de ma�as:\n");
	scanf("%i", &num);

	
	//opera��es
	if (num >= 12){
		total = (num * 1.00);
		printf("O valor da compra �: %f", total);
	}
	if (num < 12){
		total = (num * 1.30);
		printf("O valor da compra �: %f2n", total);
	}
	
}

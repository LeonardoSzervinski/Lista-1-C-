#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declara??o de vari?vei locais
	float num1, num2;
	
	//entrada de dados
	printf("Insira um numero:\n");
	scanf("%f", &num1);
	printf("Insira outro numero:\n");
	scanf("%f", &num2);

	
	//opera??es	
	if (num1 > num2){
		printf("A ordem crescente ?: %f", num2);
		printf(" e %f", num1);
	}
	if (num2 > num1){
		printf("A ordem crescente ?: %f", num1);
		printf(" e %f", num2);
	}
	
}

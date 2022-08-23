#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variávei locais
	float num1, num2;
	
	//entrada de dados
	printf("Insira um numero:\n");
	scanf("%f", &num1);
	printf("Insira outro numero:\n");
	scanf("%f", &num2);

	
	//operações	
	if (num1 > num2){
		printf("O maior numero é: %f", num1);
	}
	if (num2 > num1){
		printf("O maior numero é: %f", num2);
	}
	
}

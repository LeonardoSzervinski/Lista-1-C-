#include <stdio.h>
#include <locale.h>

main() {

	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int num;
	
	//entrada de dados
	printf("Insira um número: \n");
	scanf("%i", &num);

	//operações
	if (num > 0){
		printf("Positivo.");
	}
	if (num < 0){
		printf("Negativo.");
	}
	else {
		printf("Valor é 0.");
	}
}

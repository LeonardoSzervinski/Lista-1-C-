#include <stdio.h>
#include <locale.h>

main() {

	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int num;
	
	//entrada de dados
	printf("Insira um n�mero: \n");
	scanf("%i", &num);

	//opera��es
	if (num > 0){
		printf("Positivo.");
	}
	if (num < 0){
		printf("Negativo.");
	}
	else {
		printf("Valor � 0.");
	}
}

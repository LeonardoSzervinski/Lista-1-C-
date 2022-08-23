#include <stdio.h>
#include <locale.h>

main() {

	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int num1,num2,num3,soma;
	
	//entrada de dados
	printf("Insira um valor: \n");
	scanf("%i", &num1);
	printf("Insira outro valor: \n");
	scanf("%i", &num2);
	printf("Insira outro valor: \n");
	scanf("%i", &num3);
	
	//operações
	if (num1 > num2 && num1 > num3 && num2 > num3) {
		soma = num1 + num2;
		printf("A soma dos dois maiores números é: %i \n", soma);
	}
		if (num2 > num1 && num2 > num3 && num1 > num3) {
			soma = num2 + num1;
			printf("A soma dos dois maiores números é: %i \n", soma);
		}
			if (num3 > num1 && num3 > num2 && num1 > num2) {
				soma = num3 + num1;
				printf("A soma dos dois maiores números é %i \n", soma);
			}
				if (num1 > num3 && num1 > num2 && num3 > num2) {
					soma = num1 + num3;
					printf("A soma dos dois maiores números é %i \n", soma);
				}
					if (num3 > num1 && num3 > num2 && num2 > num1) {
						soma = num3 + num2;
						printf("A soma dos dois maiores números é %i \n", soma);
					}
						if (num2 > num1 && num2 > num3 && num3 > num1) {
							soma = num2 + num3;
							printf("A soma dos dois maiores números é %i \n", soma);
						}
						
}

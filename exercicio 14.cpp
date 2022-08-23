#include <stdio.h>
#include <locale.h>

main() {

	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int num1,num2,num3;
	
	//entrada de dados
	printf("Insira um valor: \n");
	scanf("%i", &num1);
	printf("Insira outro valor: \n");
	scanf("%i", &num2);
	printf("Insira outro valor: \n");
	scanf("%i", &num3);
	
	//operações
	if (num1 > num2 && num1 > num3 && num2 > num3) {
		printf("A ordem crescente é: %i \n", num3);
		printf("%i \n",num2);
		printf("%i \n",num1);
	}
		if (num2 > num1 && num2 > num3 && num1 > num3) {
			printf("A ordem crescente é: %i \n", num3);
			printf("%i \n",num1);
			printf("%i \n",num2);
		}
			if (num3 > num1 && num3 > num2 && num1 > num2) {
				printf("A ordem crescente é: %i \n", num2);
				printf("%i \n",num1);
				printf("%i \n",num3);
			}
				if (num1 > num3 && num1 > num2 && num3 > num2) {
					printf("A ordem crescente é: %i \n", num2);
					printf("%i \n",num3);
					printf("%i \n",num1);
				}
					if (num3 > num1 && num3 > num2 && num2 > num1) {
						printf("A ordem crescente é: %i \n", num1);
						printf("%i \n",num2);
						printf("%i \n",num3);
					}
						if (num2 > num1 && num2 > num3 && num3 > num1) {
							printf("A ordem crescente é: %i \n", num1);
							printf("%i \n",num3);
							printf("%i \n",num2);
						}
						
}

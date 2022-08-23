#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	//Declaração de variáveis 
	int num1, num2;
	float div;

	//Operações, Entrada e Saída de dados
	while (div >= 0){
		printf("Insira o primeiro valor: \n");
		scanf("%i", &num1);
		printf("Insira o segundo valor: \n");
		scanf("%i", &num2);
		if (num2 == 0){
			while(num2 == 0){
				printf("Insira outro valor: \n");
				scanf("%i", &num2);
			}
		}
		div = num1 / num2;
		printf("O valor da divisão é: %f \n", div );
		printf("\n");		
	}
	


}

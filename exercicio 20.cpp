#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	//Declara��o de vari�veis 
	int num1, num2;
	float div;

	//Opera��es, Entrada e Sa�da de dados
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
		printf("O valor da divis�o �: %f \n", div );
		printf("\n");		
	}
	


}

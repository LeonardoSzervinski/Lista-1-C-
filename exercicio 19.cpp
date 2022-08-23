#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	//Declaração de variáveis 
	int num1, num2;
	float div;
		
	//Entrada de dados
	printf("Insira o primeiro valor: \n");
	scanf("%i", &num1);
	printf("Insira o segundo valor: \n");
	scanf("%i", &num2);
	
	//Operações e Saída de dados
	while (num2 == 0){
		printf("Insira outro valor: \n");
		scanf("%i", &num2);
		
	}
	div = num1 / num2;
	printf("O valor da divisão é: %f \n", div );


}

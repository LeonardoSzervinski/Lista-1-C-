#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	//Declara��o de vari�veis 
	int cod, anonasc, anoingres;
	int idade, tempo;
	
	
	//Entrada de dados
	printf("Insira seu c�digo de usu�rio: \n");
	scanf("%i", &cod);
	printf("Insira seu ano de nascimento: \n");
	scanf("%i", &anonasc);
	printf("Insira seu ano de ingresso: \n");
	scanf("%i", &anoingres);
	
	
	//Opera��es e Sa�da de dados
	idade = 2022 - anonasc;
	tempo = 2022 - anoingres;
	printf("Sua idade �: %i \n", idade );
	printf("Seu tempo de trabalho �: %i \n", tempo);
	if (idade >= 65 || tempo >= 30 || idade >= 60 && tempo >= 25) {
		printf("Requerer aposentadoria. \n");	
	}
	else {
		printf("N�o requerer.");
	}

}

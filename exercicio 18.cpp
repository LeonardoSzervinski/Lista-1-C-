#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	//Declaração de variáveis 
	int cod, anonasc, anoingres;
	int idade, tempo;
	
	
	//Entrada de dados
	printf("Insira seu código de usuário: \n");
	scanf("%i", &cod);
	printf("Insira seu ano de nascimento: \n");
	scanf("%i", &anonasc);
	printf("Insira seu ano de ingresso: \n");
	scanf("%i", &anoingres);
	
	
	//Operações e Saída de dados
	idade = 2022 - anonasc;
	tempo = 2022 - anoingres;
	printf("Sua idade é: %i \n", idade );
	printf("Seu tempo de trabalho é: %i \n", tempo);
	if (idade >= 65 || tempo >= 30 || idade >= 60 && tempo >= 25) {
		printf("Requerer aposentadoria. \n");	
	}
	else {
		printf("Não requerer.");
	}

}

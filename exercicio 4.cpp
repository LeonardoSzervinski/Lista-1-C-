#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�vei locais
	int anonasc,anoatual,idade;
	
	//entrada de dados
	printf("Ano atual:\n");
	scanf("%i", &anoatual);
	printf("Ano de nascimento:\n");
	scanf("%i", &anonasc);

	
	//opera��es
	idade = anoatual - anonasc;	
	if (idade >= 18){
		printf("Poder� votar esse ano. ");
	}
	if (idade < 18){
		printf("Nao poder� votar esse ano.");
	}
	
}

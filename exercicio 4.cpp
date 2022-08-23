#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variávei locais
	int anonasc,anoatual,idade;
	
	//entrada de dados
	printf("Ano atual:\n");
	scanf("%i", &anoatual);
	printf("Ano de nascimento:\n");
	scanf("%i", &anonasc);

	
	//operações
	idade = anoatual - anonasc;	
	if (idade >= 18){
		printf("Poderá votar esse ano. ");
	}
	if (idade < 18){
		printf("Nao poderá votar esse ano.");
	}
	
}

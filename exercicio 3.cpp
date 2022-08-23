#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variávei locais
	float p1,p2;
	float media;
	
	//entrada de dados
	printf("Insira a primeira nota:\n");
	scanf("%f", &p1);
	printf("Insira a segunda nota:\n");
	scanf("%f", &p2);

	
	//operações
	media = (p1 + p2)/2;
	
	if (media >= 6){
		printf("O aluno foi aprovado. ");
	}
	if (media < 6){
		printf("O aluno nao foi aprovado.");
	}
	
}

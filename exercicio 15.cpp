#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	char time1[15];
	char time2[15];
	int gol1, gol2;
	
	
	//entrada de dados
	printf("Insira o nome da primeira equipe. \n");
	fgets(time1, 15, stdin);
	printf("Insira o nome da segunda equipe. \n");
	fgets(time2, 15, stdin);
	printf("Quantidade de gols da primeira equipe: \n");
	scanf("%i", &gol1);
	printf("Quantidade de gols da segunda equipe: \n");
	scanf("%i", &gol2);

	//operações
	
	if (gol1 == gol2) {
		printf("Empate entre as duas equipes.");
	}	
		if (gol1 > gol2) {
			printf("%s", time1);	
			printf("É o vencedor.");	
		}
			if (gol2 > gol1) {
				printf("%s", time2);	
				printf("É o vencedor.");	
			}
			
	
	
}

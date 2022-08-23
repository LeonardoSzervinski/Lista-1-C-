#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variávei locais
	float salhora,saltotal, acrescimo, salext;
	int hrtra, hrextra;
	
	//entrada de dados
	printf("Insira o salário por hora:\n");
	scanf("%f", &salhora);
	printf("Insira as horas trabalhadas no mês:\n");
	scanf("%i", &hrtra);

	
	//operações	
	if (hrtra > 160){
		hrextra = hrtra - 160;
		salext = salhora + (salhora/2);
		acrescimo = (hrextra * salext); 
		saltotal = acrescimo + (salhora * 160);
		printf("O salário total com acréscimo é: %f \n", saltotal);
		
	}
	if  (hrtra = 160){
		saltotal = salhora * 160;
		printf("O salário é: %f", saltotal);
		
	}
	
}

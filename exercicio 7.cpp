#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�vei locais
	float salhora,saltotal, acrescimo, salext;
	int hrtra, hrextra;
	
	//entrada de dados
	printf("Insira o sal�rio por hora:\n");
	scanf("%f", &salhora);
	printf("Insira as horas trabalhadas no m�s:\n");
	scanf("%i", &hrtra);

	
	//opera��es	
	if (hrtra > 160){
		hrextra = hrtra - 160;
		salext = salhora + (salhora/2);
		acrescimo = (hrextra * salext); 
		saltotal = acrescimo + (salhora * 160);
		printf("O sal�rio total com acr�scimo �: %f \n", saltotal);
		
	}
	if  (hrtra = 160){
		saltotal = salhora * 160;
		printf("O sal�rio �: %f", saltotal);
		
	}
	
}

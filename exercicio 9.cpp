#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int ncont;
	float saldo, saldoatual, debito, credito;

	//entrada de dados
	printf("Insira o n�mero da conta: \n");
	scanf("%f", &ncont);
	printf("Insira o seu saldo: \n");
	scanf("%f", &saldo);
	printf("Insira o seu cr�dito: \n");
	scanf("%f", &credito);
	printf("Insira o seu d�bito: \n");
	scanf("%f", &debito);
			
	//opera��es
	saldoatual = saldo - debito + credito;
	printf("Seu saldo atual � de: %f \n", saldoatual);
	if (saldoatual >= 0) {
		printf("Saldo Positivo.");
	}
	if (saldoatual < 0){
		printf("Saldo Negativo.");
	}
	
}

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int ncont;
	float saldo, saldoatual, debito, credito;

	//entrada de dados
	printf("Insira o número da conta: \n");
	scanf("%f", &ncont);
	printf("Insira o seu saldo: \n");
	scanf("%f", &saldo);
	printf("Insira o seu crédito: \n");
	scanf("%f", &credito);
	printf("Insira o seu débito: \n");
	scanf("%f", &debito);
			
	//operações
	saldoatual = saldo - debito + credito;
	printf("Seu saldo atual é de: %f \n", saldoatual);
	if (saldoatual >= 0) {
		printf("Saldo Positivo.");
	}
	if (saldoatual < 0){
		printf("Saldo Negativo.");
	}
	
}

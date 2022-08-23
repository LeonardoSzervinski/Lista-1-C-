#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	int cod, senha;
	
	
	//entrada de dados
	printf("Insira o código de usuário: \n");
	scanf("%i", &cod);
	
	//operações e saída de dados
	while (cod != 1234) {
		printf("Código incorreto. \n");
		printf("Insira o código de usuário: \n");
		scanf("%i", &cod);	
	}
	printf("Insira a senha: \n");
	scanf("%i", &senha);
	
	while (senha != 9999){
		printf("Senha incorreta. \n");
		printf("Insira a senha: \n");
		scanf("%i", &senha);
		}
	printf("Acesso permitido.");
		
}

#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	int cod, senha;
	
	
	//entrada de dados
	printf("Insira o c�digo de usu�rio: \n");
	scanf("%i", &cod);
	
	//opera��es e sa�da de dados
	while (cod != 1234) {
		printf("C�digo incorreto. \n");
		printf("Insira o c�digo de usu�rio: \n");
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

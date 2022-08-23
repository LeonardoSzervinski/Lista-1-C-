#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//declaração de variáveis
	float salfix;
	float vlrvendas;
	float comissao;
	float saltotal;
	float x; // x pra guardar o valor excedente de 1500
	float y; // y pra guardar o valor da comissão normal
	
	//entrada de dados
	printf("Insira o salário fixo:\n");
	scanf("%f", &salfix);
	printf("Insira o valor das vendas efetuadas:\n");
	scanf("%f", &vlrvendas);
	
		//operações
	if (vlrvendas < 1.500){
		comissao = vlrvendas * 0.03;
		saltotal = salfix + comissao;
		printf("O salário total é de: %f", saltotal);
		
	}
	if (vlrvendas > 1.500){
		x = vlrvendas - 1.500;
		y = vlrvendas * 0.03;
		comissao = y + (x * 0.05);
		saltotal = salfix + comissao;
		printf("O salário total é de: %f", saltotal);
	
		
	}
	
}

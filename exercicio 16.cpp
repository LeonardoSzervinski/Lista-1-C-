#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	float moran, maca, valor1, valor2, somaval, somakg, total, desc;
	
	//entrada de dados
	printf("Insira a quantidade em Kg de morango: \n");
	scanf("%f", &moran);
	
	//opera��es
	if (moran <= 5.00){
		valor1 = moran * 2.50;
	}
	else {
	
		valor1 = moran * 2.20;
	}
	//entrada de dados
	printf("Insira a quantidade em Kg de ma��: \n");
	scanf("%f", &maca);
	
	//opera��es
	if (maca <= 5.00){
		valor2 = maca * 1.80;
	}
	else{
		valor2 = maca * 1.50;
	}
	
	somakg = maca + moran;
	somaval = valor1 + valor2;
	if (somakg > 8.00 || somaval > 25.00 ){
		desc = (valor1 + valor2) * 0.10;
		total = (valor1 + valor2) - desc;
		printf("O valor da compra com desconto �: %f \n",total);
	}
	else{
		total = valor1 + valor2;
		printf("O valor da compra � de: %f \n", total);
	}
	
	
}

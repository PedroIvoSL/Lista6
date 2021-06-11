#include <stdio.h>
#include <stdlib.h>

int main (){

	float precoIngresso = 15;
	int ingressosVendidos = 120;
	float despezas = 600;
	float lucro;

	printf("|  Preço  |  Ingressos vendidos  |  Despezas  |  Lucro  |\n");

	for(precoIngresso; precoIngresso > 0; precoIngresso = precoIngresso - 3){
		lucro = (precoIngresso * ingressosVendidos) - despezas;
		printf("|%7.2lf  |%22i|  %10.2lf|  %7.2lf|\n", precoIngresso, ingressosVendidos, despezas, lucro);
		ingressosVendidos = ingressosVendidos + 26;
	}



    return 0;
}
#include<stdio.h>

int main(){
	int numero;
	int constante = 2001;
	printf("DIGITE UM NUMERO: ");
	scanf("%i", &numero);

	if(numero > constante) printf("LIMITE DE VALOR EXCEDIDO");
	else{
		printf("\n\nNUMEROS PARES ENTRE %i E %i:\n", numero, constante);
		numero++;
		for(numero; numero<constante; numero++)
			if(numero % 2 == 0) printf("%i\n", numero);
	}
	return 0;
}
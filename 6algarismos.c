#include<stdio.h>
#include<stdlib.h>

int main(){


	int numeroDigitado, numero, contador=0;

	do{
		printf("DIGITE UM NUMERO NATURAL POSITIVO: ");
		scanf("%d", &numeroDigitado);
		if(numeroDigitado<=0){
			printf("APENAS NUMEROS POSITIVOS\n\n");
		}
	}while(numeroDigitado<=0);

	numero=numeroDigitado;

	while(numero!=0){
		numero=numero/10;
		contador++;
	}

	system("cls");

	printf("NUMERO: %d", numeroDigitado);
	printf("\nQUANTIDADE DE DIGITOS: %d ", contador);


	return 0;

}
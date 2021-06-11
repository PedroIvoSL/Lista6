#include<stdio.h>

int main(){
	int numero = 0;
	int fatorial = 1;

	printf("DIGITE O FATORIAL: ");
	scanf("%i", &numero);
	while(numero > 0){
		fatorial = fatorial * numero;
		numero--;
	}
	printf("\nFATORIAL DO NUMERO DIGITADO E: %i", fatorial);
	return 0;
}
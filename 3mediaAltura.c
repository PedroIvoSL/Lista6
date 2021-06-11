
#include<stdio.h>
#include<ctype.h>

int main() {

	char sexo;
	float altura, maiorAltura = 0, menorAltura = 100, mediaAltura = 0;
	int quantMulheres = 0, quantHomens = 0, i;

	for(i = 0; i < 10; i ++) {
		do {
			printf("DIGITE O SEXO DA PESSOA %i [F|M]: \n", i+1);
			scanf("%c", &sexo);
		} while (tolower(sexo) != 'f' && tolower(sexo) != 'm');
		getchar();

		while (altura) {
			printf("INSIRA A ALTURA DA PESSOA %i: \n", i+1);
			scanf("%f", &altura);
			if (altura > 0){
				break;
			}
		}
		getchar();

		if (altura > maiorAltura) {
			maiorAltura = altura;
		}
		if (altura < menorAltura) {
			menorAltura = altura;
		}

		if (tolower(sexo) == 'f') {
			mediaAltura += altura;
			quantMulheres ++;
		} else {
			quantHomens ++;
		}
	}
	mediaAltura /= quantMulheres;

	printf("A MAIOR ALTURA E: %.2fm\nA MENOR ALTURA E: %.2fm\n", maiorAltura, menorAltura);
	printf("\nA MEDIA DA ALTURA DAS MULHERES E: %.2fm\nO NUMERO DE HOMENS SAO: %i", mediaAltura, quantHomens);
	return 0;
}
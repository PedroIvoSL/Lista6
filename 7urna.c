#include<stdio.h>
#include<stdlib.h>

int main(){

	int voto, votosTotais = 0, votosPele, votosMaradona, votosBranco, votosAnulado;
	char confirma;
	char acabou;

	while(voto){
		printf("eleitor nº%i\n", votosTotais+1);
		printf("Digite o seu voto: ");
		scanf("%i", &voto);
		fflush(stdin);

		switch(voto){
			case 25: printf("VOTO PELE"); break;
			case 33: printf("VOTO MARADONA"); break;
			case 0: printf("VOTO BRANCO"); break;
			default: printf("VOTO ANULADO"); break;
		}

		printf("\n\nCONFIRMAR VOTO?: ");
		scanf("%c", &confirma);
		fflush(stdin);
		if(confirma == 'S'){
			switch(voto){
				case 25: votosPele++; break;
				case 33: votosMaradona++; break;
				case 0: votosBranco++; break;
				default: votosAnulado++; break;
			}
		} else continue;

		votosTotais++;
		printf("FINALIZAR?: ");
		scanf("%c", &acabou);
		if(acabou == 'S') break;
	}
	system("CLS");
	printf("VOTOS PRO PELE: %i\n",votosPele);
	printf("VOTOS PRO MARADONA: %i\n", votosMaradona);
	printf("VOTOS EM BRANCO: %i\n", votosBranco);
	printf("VOTOS ANULADOS: %i\n", votosAnulado);
	if(votosMaradona != votosPele){
		printf("O VENCEDOR E O: ");
		if(votosMaradona > votosPele) printf("MARADONA");
			else printf("PELE");
	} else printf("*** EMPATE ***");
}
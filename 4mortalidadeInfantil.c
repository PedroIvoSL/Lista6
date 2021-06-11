#include <stdio.h>
#include <stdlib.h>

int main(){

	int criancasTotal=0, contador=1, criancasMortas=0, meninosMortos=0, prematuros=0, mesesVida;
	char sexoCrianca;
	int porcentagemMortos, porcentagemMeninosMortos, porcentagemPrematuros;

		do{
			printf("DIGITE A QUANTIDADE DE CRIANCAS NO TOTAL: ");
			scanf("%d", &criancasTotal);
			if(criancasTotal<=0){
				printf("\nDIGITE UM VALOR VALIDO!\n\n ");
			}
		}while(criancasTotal<=0);

		do{
			printf("DIGITE 'V' PARA SAIR!");
			printf("\n\nDIGITE O SEXO DA %dª CRIANCA. [F/M]: ", contador);

			do{
				scanf("%c", &sexoCrianca);
			}while(sexoCrianca != 'f' && sexoCrianca != 'F' && sexoCrianca != 'm' && sexoCrianca != 'M' && sexoCrianca != 'v' && sexoCrianca != 'V');

			system("cls");

			do{
				printf("\n\nDIGITE A IDADE DA %dª CRIANCA EM MESES: ", contador);
				scanf("%d", &mesesVida);
				if(mesesVida<=0){
					printf("\nDIGITE UM VALOR VALIDO!");
				}
			}while(mesesVida<=0);

			system("cls");


			if(sexoCrianca=='m'||sexoCrianca=='M'){
				meninosMortos++;
			}


			if(mesesVida<=24){
				prematuros++;
			}

			criancasMortas++;
			contador++;

		}while(sexoCrianca != 'v' && sexoCrianca != 'V');

	system("cls");

	criancasMortas = criancasMortas-1;
	prematuros = prematuros-1;
	porcentagemMortos = criancasMortas*100 / criancasTotal;
	porcentagemMeninosMortos =  meninosMortos*100/ criancasTotal;
	porcentagemPrematuros =  prematuros*100 / criancasTotal;

	printf("RESULTADOS:\n\n");
	printf("TOTAL DE CRIANCAS: %d\n", criancasTotal);
	printf("TOTAL DE CRIANCAS MORTAS: %d\n", criancasMortas);
	printf("TAXA DE MORTALIDADE INFATIL: %d %%\n", porcentagemMortos);
	printf("TAXA DE MENINOS MORTOS: %d %%\n", porcentagemMeninosMortos);
	printf("CRIANCAS QUE MORRERAM ANTES DOS 24 MESES DE VIDA: %d %%", porcentagemPrematuros);

	return 0;
}

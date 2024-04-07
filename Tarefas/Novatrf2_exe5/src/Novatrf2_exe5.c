/*
 ============================================================================
 Name        : Novatrf2_exe5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void calcularPagamento(double totalGasto){
	int opcaoPagamento;
	double valorFinal;

	while(1){

		printf("\nOpção de pagamento:\n");
		printf("1- À vista(com 10%% de desconto)\n");
		printf("2- Parcelado 2x(preço da etiqueta)\n");
		printf("3- Parcelado de 3x até 10x (3%% de juros ao mês, compras acima de R$300.00):");
		printf("Digite a opção desejada (ou -999 para encerrar):");
		scanf("%d",&opcaoPagamento);

		if (opcaoPagamento == -999){
			printf("Programa encerrado\n");
			break;
	}
		switch(opcaoPagamento){
		case 1:
			valorFinal = totalGasto * 0.9;
			printf("Valor à vista com desconto: R$%.2lf\n", valorFinal);
			break;

		case 2:
			valorFinal = totalGasto;
			printf("Valor parcelado em 2x: ex R$%.2lf\n", valorFinal/2);
			break;
		case 3:
			if(totalGasto >300.00){
				int parcelas;
				printf("Digite o numero de parcelas (3 a 10):");
				scanf("%d",&parcelas);

				if(parcelas >=3 && parcelas <=10){
					valorFinal = totalGasto * (1 + 0.03 * parcelas);
					printf("Valor parcelado em %dx: %dx R$%.2lf\n",parcelas,parcelas, valorFinal/parcelas);
					break;
				}else{
					printf("Escolha nova forma de pagamento.");
					continue;
				}
			}else{
				printf("Escolha nova forma de pagamento.");
				continue;
			}
		default:
			printf("Opção invalida.");
		}
}
}
void solicitarTotalGasto(){
	double totalGasto;

while(1){
	printf("Digite o total gasto( ou -999 para encerrar):");
	scanf("%lf", &totalGasto);

	if(totalGasto == -999){
		printf("Programa encerrado.\n");
		break;
	}
	calcularPagamento(totalGasto);
}
}
int main(void){
	solicitarTotalGasto();
	return 0;
}

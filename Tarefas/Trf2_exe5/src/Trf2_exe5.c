/*
 ============================================================================
 Name        : Trf2_exe5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int calcularTotalGasto(){
	float totalGasto, parcelas;
	int formaDePagamento, vezes;

	printf("Digite o total gasto:");
	scanf("%f",&totalGasto);

	printf("Selecione a forma de pagamento:\n");
	printf("1- A vista com 10%% de desconto:\n");
	printf("2- Parcelado 2x (preço da etiqueta):\n");
	printf("3- Parcelado 3x a 10x com 3%% de juros ao mes(compras acima de R$300,00:\n");
	scanf("%d",&formaDePagamento);
if(formaDePagamento == 1){
	parcelas = totalGasto - (totalGasto * 0.1);
	printf("O total a pagar é uma parcela de:%.2f",parcelas);
}else if(formaDePagamento == 2){
	parcelas = totalGasto/2;
	printf("O total a pagar é duas parcelas de: %.2f",parcelas);
}else if(formaDePagamento == 3){
	printf("Digite quantas vezes deseja pagar:\n");
	scanf("%d",&vezes);

}
if (totalGasto > 300 && vezes <=10 && vezes >=3){
	parcelas = (totalGasto +(totalGasto* 0.03))/vezes;
	printf("O total a pagar é %d parcelas de: %.2f", vezes ,parcelas);
}else{
	printf("O parcelamento é entre 3 e 10 vezes e não permitido para compras abaixo de R$300.00");
}

}else{
	printf("Forma de pagameno invalida");

    return 0;
}
int calcularPagamento(){
	float totalGasto,parcelas;
	int formaPagamento, vezes;

	if(totalGasto == -999){
		printf("Programa encerrado.\n");
		return 0;
	}

	printf("Escolha sua forma de pagamento:\n");
	printf("1- A vista com 10%% de deconto:\n");
	printf("2- Parcelado e 2x (preço da etiqueta):\n");
	printf("3- Parcelado 3x a 10x com 3%% de juros ao mes (compras acima de R$300.00):");
	scanf("%d",&formaPagamento);

	switch(formaPagamento){
	case 1:
		parcelas = totalGasto - (totalGasto * 0.01);
		printf("O total a pagar é uma parcela de: %.2f\n",parcelas);
		break;

	case 2:
		parcelas = totalGasto/2;
		printf("O total a pagar é duas parcelas de: %.2f\n", parcelas);
		break;

	case 3:
		if(totalGasto > 300){
			printf("Digite quanas vezes deseja pagar (entre 3 a 10x)");
			scanf("%d",&vezes);

			if( vezes >=3 && vezes <=10){
				parcelas = (totalGasto + (totalGasto * 0.03))/vezes;
				printf("O total a pagar é %d parcelas de: %.2f", vezes, parcelas);
			break;
			}else{
				printf("Escolha nova forma de pagamento.\n");
				continue;
			}
		}else{
			printf("Escolha nova forma de pagamento.");
			continue;
		}

	default:
		printf("Forma de pagamento invalida\n");

	}

}


}






















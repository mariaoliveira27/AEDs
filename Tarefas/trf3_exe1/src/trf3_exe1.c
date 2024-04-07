/*
 ============================================================================
 Name        : trf3_exe1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Resultado da eleição
int resultado2Turno(){
	int voto;
	printf("Slecione o candidato\n");
	printf("1- Voto candidato A\n");
	printf("2- Voto candidato B\n");
	printf("3- Apurar resultado\n");
	printf("4- Sair");
	printf("Digite a opção desejada:\n");
	scanf("%d",&voto);
	return voto;
}
int main(void){
	int numDeVotoA = 0;
	int numDeVotoB = 0;
	int opcao;

	do{
		opcao = resultado2Turno();

		switch (opcao){
		case 1 :
			numDeVotoA++;
			printf("Voto para candidto A\n");
			break;
		case 2:
			numDeVotoB++;
			printf("Voto para candidato B\n");
		case 3:
			printf("Resultado\n");
			printf("Candidato A: %d\n", numDeVotoA);
			printf("Candidato B:%d\n", numDeVotoB);
			if(numDeVotoA>numDeVotoB){
				printf("Candidato A venceu!\n");
			}else if(numDeVotoB>numDeVotoA){
				printf("Candidato B veceu!\n")
			}else{
				printf("Empate!\n");
				}
			break;
		case 4:
			printf("Opção invalida\n");
		}
	}while (opcao !=4);
return 0;
}

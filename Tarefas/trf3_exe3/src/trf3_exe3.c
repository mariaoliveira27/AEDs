/*
 ============================================================================
 Name        : trf3_exe3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int validarSituacao(int idade, int altura, int sexo){
	if(idade> 16 && altura >= 180){
		if(sexo == 1){
			printf("Apta a jogar no time Feminino Juvenil de basquete\n");

		}else if (sexo == 2 ){
			printf("Apto a jogar no time Masculino Juvenil de Basquete\n");
		}else{
			printf("Inapto\n");
		}
	}else{
		printf("Inapto\n");
	}
}
int main(void){
	int idade, altura, sexo;

	printf("Digite a idade do candidato:");
	scanf("%d",&idade);

	printf("Digite a altura do candidato:");
	scanf("%d",&altura);

	printf("Digite o sexo do candidato(Feminino = 1, Masculino =2):");
	scanf("%d",&sexo);

	validarSituacao(idade, altura, sexo);
	return 0;
}

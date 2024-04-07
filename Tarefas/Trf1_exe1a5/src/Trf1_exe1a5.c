/*
 ============================================================================
 Name        : Trf1_exe1a5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Função para somar 4 numeros inteiros

int main(void){
	int numeros;
	int soma = 0;
	int i;

	for(i=0; i<4; i++){
	printf("Digite 4 numeros inteiros:");
	scanf("%d",&numeros);
	soma+=numeros;
}
printf("A soma dos numeros é:%d",soma);
return 0;
}
//Função que receb 3 notas e faça a media delas

int main(void){
	float numeros;
	float soma = 0;
	float media;

	for(int i=0; i<3; i++){
	printf("Digite 3 notas:");
	scanf("%f",&numeros);
	soma+=numeros;
	media=soma/3;
	}
printf("A soma é:%.2f", soma);
printf("\nA media é:%.2f", media);

return 0;
}
//Função para receber salario e aumentar 25%

int main(void){
	double salario;
	double novoSalario;

	printf("Digite o salario inicial do funcionario:");
	scanf("%lf",&salario);
	novoSalario= salario * 1.25;

printf("O novo salario é: %.2lf",novoSalario);
	return 0;
}
//Função que receba o salario e o percentual de aumento.(Tem que mostrar o valor do aumento e o novo salario

#include <stdio.h>
#include <stdlib.h>

int main(void){
float salarioBase;
float percentualDeAumento;
float valorDoAumento;
float novoSalario;

printf("Digite o salario base:");
scanf("%f",&salarioBase);
printf("Digite o percetual de aumento:");
scanf("%f",&percentualDeAumento);

valorDoAumento= salarioBase * percentualDeAumento/100;
novoSalario= salarioBase + valorDoAumento;
printf("O valor do aumento é: %.2f\n",valorDoAumento);

printf("O novo salario é:%.2f", novoSalario);
return 0;
}

//Função para calcular a gratificaçao e imposto


int main(void){
  float salario, gratificacao,imposto,valorAReceber;

  printf("Digite o salario base:");
  scanf("%f",&salario);

  gratificacao= salario * 0.05;
  imposto=(salario + gratificacao)*0.07;

  printf("Gratificação é:%.2f",gratificacao);
  printf("\nImposto é:%.2f", imposto);

  valorAReceber= salario + gratificacao - imposto;

  printf("\nO valor a receber é:%.2f",valorAReceber);
  return 0;
}

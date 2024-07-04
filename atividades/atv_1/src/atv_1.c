/*
 ============================================================================
 Name        : a.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int atv1(){
	//Declarar variavel
	float x = 20;
	float y = 15;
	float z = 2;
	float resultado;
	//conta
	resultado =(x-y)/z;
	//mostar resultado da conta
	printf("O resultado é:%.2f",resultado);
	return 0;
}
int atv2 (){
	float area, raio;
	//declarar constante
	const float pi = 3.14;
	printf("\nDigite o raio do circulo:");
	scanf("%f",&raio);
	area = pi* (raio *raio);

	printf("A area do circulo é: %.2f",area);
	return 0;
}
int atv3(){
	float area, base, altura;
	pritf("Digite a base do triângulo:");
	scanf("%f",&base);
	printf("Digite a altura do triângulo:");
	scanf("%f",&altura);
	area = (base*altura)/2;

	printf("A area do triângulo é:%.2f",area);
	return 0;
}
int atv4(){
		float DT,HTD,HTM,VH,PD,SB,TD,SL;
		printf("Digite as horas trabalhadas diárias:");
		scanf("%f",&HTD);
		printf("Digite a quantidade de dias trabalhados no mês:");
		scanf("%f",&DT);
		printf("Digite o valor das horas trabalhadas:");
		scanf("%f",&VH);
		printf("Digite o percentual de desconto:");
		scanf("%f",&PD);
		HTM = HTD*DT;
		SB = HTM*VH;
		TD = (PD/100)*SB;
		SL = SB-TD;
		//RESULTADOS

		printf("As horas trabalhadas no mês é:%f",HTM);
		printf("\nO salario bruto é %.2f",SB);
		printf("\nO total de desconto é:%.2f",TD);
		printf("\nO salario liquido é:%.2f",SL);

	    return 0;

}
int main(void){
	atv1();
	atv2();
	atv3();
	atv4();
}

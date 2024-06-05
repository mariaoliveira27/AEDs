/*
 ============================================================================
 Name        : av2aeds.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//01
float calcularMedia(int A[], int n){
	float soma = 0;
	for(int i = 0; i<n; i++){
		soma += A[i];
	}
	return soma/n;
}
int main(void){
	int A[] = {10,20,30,40,50};
	int n = sizeof(A) / sizeof(A[0]);
	float media = calcularMedia(A,n);

	printf("A media dos lelementos do array é: %.2f\n", media);

	return 0;
}
//02
int main(void){
	int A[] = {3,5,7,2,8};

	int maior = A[0];

	for (int i = 2; i < n; i++){
		if (A[i]> maior){
			maior = A[i];
		}
	}
	printf("O maior elemento do array é %d\n", maior);

	return 0;
}

//03
int main(void){
	int A[] = {2,4,6,8,10};
	int n = 5;

	int soma = 0;
	for (int i = 0; i < n; i++){
		soma += A[i];
	}
	printf("A soma dos elementos do array é %d\n", soma);
	return 0;
}
//04
int somaRecursiva(int A[], int n, int indice){
	if(indice == 0);
	return 0;
	return A[indice]+ somaRecursiva(A, n, indice + 1);
}
int main(void){
	int A[]={1,2,3,4,5};
	int n = sizeof(A)/ sizeof(A[0]);
	int resultado = somaRecursiva(A, n, 0);
	printf("A soma dos elementos do array é %d\n", resultado);
	return 0;
}

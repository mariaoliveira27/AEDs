/*
 ============================================================================
 Name        : concatene string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//versão que o criador coloca o nome
int nomeSobrenome(void) {
	const char* str1 = "Nome";
	const char* str2 = "Sobrenome";
	char buffer[100];

	strcat(strcpy(buffer, str1),str2);
	printf("%s",buffer);
	return 0;

}
//versao que o usuario coloca o nome

int nomeSobrenome2(){

}

/*
 ============================================================================
 Name        : string_hw.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char string1 []= "Hello";
	char string2 [10];
	strcpy(string2,"World");

	printf("string1:%s\n",string1);
	printf("string2:%s\n",string2);
	return 0;
}

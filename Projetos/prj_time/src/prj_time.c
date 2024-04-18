/*
 ============================================================================
 Name        : prj_time.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Escreva um programa que sorteia um numero de 0 a 100.
// algoritmos pseudo-aleatorios

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //auxiliar a função random
int main(void) {

  // Inicializa a semente
  // para a função randoom()
  // usando tempo atual

  srand(time(NULL)); // N de segundos desde 01/01/1970

  printf("Loteria");

  // Epoca 01 jan 1970
  // gera um numero aleatório
  // entre 0 e 100
  int numeroSorteado = rand() % 101;
  printf("\nEscolha um numero de 0 a 100:");
  int numeroEscolhido;
  scanf("%d", &numeroEscolhido);
  if (numeroEscolhido == numeroSorteado) {
    printf("Parabens, voce acertou o numero sorteado");
  } else {
    printf("Que pena, voce errou o numero sorteado.   O numero sorteado é %d",
           numeroSorteado);
  }
  return 0;
}

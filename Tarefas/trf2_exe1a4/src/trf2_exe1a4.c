/*
 ============================================================================
 Name        : trf2_exe1a5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
// função para mostrar pares mult de 3 de 0 a 1000

void mostrarNumParesEMult3() {
  int cont = 0;
  printf("Numeros pares e multiplos de 3 de 0 a 1000\n");
  for (int i = 2; i <= 1000; i += 2) {
    if (i % 3 == 0) {
      printf("%d", i);
      cont++;
    }
  }
  printf("\nTotal de numeros pares e multiplos de 3: %d\n",cont);
}
//Calcular Soma e Media de 10 numeros
void calcularSomaEMedia() {
  int numeros;
  int soma = 0;
  double media;
  for (int i = 0; i < 10; i++) {
    printf("Digite 10 numeros:");
    scanf("%d", &numeros);
    soma += numeros;
    media = soma / 10;
  }
  printf("A soma dos numeros eh: %d\n", soma);
  printf("A media eh: %.2lf\n", media);
}
//Calcular area de 4 comodos
void calcularAreade4Comodos() {
  float largura;
  float comprimento;
  float area;
  float areaTotal = 0;
  for (int i = 1; i <= 4; i++) {
    printf("Digite a largura do comodo %d:", i);
    scanf("%f", &largura);
    printf("Digite o comprimento do comodo %d:", i);
    scanf("%f", &comprimento);
    area = comprimento * largura;
    areaTotal = areaTotal + area;

    printf("A area do comodo %d é: %.2f\n", i, area);
  }
  printf("Area do comodos:%.2f\n", areaTotal);
}
//Calcular area e perimetro do circulo
void calcularPerimetroEAreaDoCirc(){
  float raio, perimetro, area;

  printf("Digite o raio do circulo:");
  scanf("%f",&raio);

  perimetro = 2 * PI * raio;
  area = PI * raio * raio;

  printf("Perimetro: %.2f\n",perimetro);
  printf("A area é: %.2f\n", area);

}

int main(void){
  mostrarNumParesEMult3();
  calcularSomaEMedia();
  calcularAreaDe4Comodos();
  calcularPerimetroEAreaDoCirc();

  return 0;
}



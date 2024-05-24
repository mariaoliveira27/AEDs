#include <stdio.h>
#include <stdlib.h>


float somaDe4Num(){
  float numero, soma = 0;
  printf("Digite 4 numeros para serem somados!");
  for(int i = 0; i < 4; i++){
      printf("\nDigite um numero: ");
      scanf("%f", &numero);
    soma = soma + numero;
    }
    printf("A soma dos numeros eh: %.2f", soma);
  return soma;
  }

float calcularSomaEMedia(){
  float notas, soma = 0, media = 0;
  printf("Digite 3 notas para serem somadas e tiradas a media!");
  for(int i = 0; i < 3; i++){
    printf("\nDigite a nota: ");
    scanf("%f", &notas);
    soma = soma + notas;
  }
  media = soma / 3;
  printf("A soma das notas eh: %.2f\n", soma);
  printf("A media das notas eh: %.2f\n", media);
  return 0;
}
float mudancaDeSalario(){
  float salario, novoSalario;
  printf("Digite o salário para sofre uma bonificação de 25%!");
  printf("\nDigite o salario: ");
  scanf("%f", &salario);
  novoSalario = salario + (salario * 0.25);
  printf("O novo salario eh: %.2f", novoSalario);
}
float novoSalario(){
  float salario, novoSalario, aumento, valorAumento;
  printf("\nDigite o salario: ");
  scanf(" %f", &salario);
  printf("Digite o aumento: ");
  scanf("%f", &aumento);
  valorAumento = salario * aumento;
  novoSalario = salario + (salario * aumento);
printf("O novo salario eh: %.2f", novoSalario);
  printf("\nO valor do aumento eh: %.2f", valorAumento);
}
float salarioBase(){
  float  salarioBase,gratificação, imposto, salarioFinal;
  printf("\nDigite o salario: ");
  scanf("%f", &salarioBase);
  gratificação = salarioBase * 0.05;
  imposto = salarioBase * 0.07;
  salarioFinal = salarioBase + gratificação - imposto;
  printf("\nO salario final eh: %.2f", salarioFinal);
}
int main(void) {
  int opcao = -1;
  do{
    printf("\nMenu\n");
    printf("1 - Soma de 4 numeros\n");
    printf("2 - Calcular soma e media\n");
    printf("3 - Mudanca de salario\n");
    printf("4 - Novo salario\n");
    printf("5 - Salario base\n");
    printf("0 - Sair\n");
    printf("Digite a opcao desejada: ");
    scanf(" %d", &opcao);

    switch(opcao){
      case 1:
        somaDe4Num();
        break;
      case 2:
        calcularSomaEMedia();
        break;
      case 3:
         mudancaDeSalario();
        break;
      case 4:
        novoSalario();
        break;
      case 5:
          salarioBase();
          break;
      case 0:
      printf("Saindo.");
      break;
    }
      
  }while(opcao != 0);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Função para soma de 4 numeros inteiros
int main(void) {
  int numeros;
  int soma = 0;
  for (int i = 1; i <= 4; i++) {
    printf("Digite 4 numeros inteiros para serem somados:");
    scanf("%d", &numeros);
    soma += numeros;
  }
  printf("A soma dos numeros eh: %d", soma);

  return 0;
}

// função para soma e media de 3 notas
int main(void) {
  float numero;
  float soma = 0;
  float media;
  for (int i = 1; i <= 3; i++) {
    printf("Digte 3 notas para serem somadas e tiradas a media:");
    scanf("%f", &numero);
    soma += numero;
    media = soma / 3;
  }
  printf("A soma eh: %.2f\n", soma);
  printf("A media eh: %.2f\n", media);

  return 0;
}

// função para aumento de salario
int main(void) {

  float salariobase;
  float novoSalario;
  printf("Digite o salario base:");
  scanf("%f", &salariobase);
  novoSalario = salariobase * 1.25;
  printf("o novo salario é: %.2f", novoSalario);
}

// função para aumento de salario com percentual feio pelo usuario

int main(void) {

  float salarioBase;
  float percentualDeAumento;
  float valorDoAumento;
  float novoSalario;

  printf("Digite o salario base:");
  scanf("%f", &salarioBase);

  printf("Digite o percentual de aumento:");
  scanf("%f", &percentualDeAumento);

  valorDoAumento = salarioBase * percentualDeAumento / 100;
  novoSalario = salarioBase + valorDoAumento;

  printf("O novo salario eh: %.2f", novoSalario);

  return 0;
}

// função para gratificação e imposto

int main(void) {
  float salarioBase, gratificacao, imposto, valorAReceber;
  printf("Digite o salario base:");
  scanf("%f", &salarioBase);
  gratificacao = salarioBase * 0.05;
  imposto = (salarioBase + gratificacao) * 0.07;
  printf("Gratificação eh: %.2f\n", gratificacao);

  printf("Imposto eh:%.2f\n", imposto);
  valorAReceber = salarioBase + gratificacao - imposto;

  printf("O valor a receber eh: %.2f", valorAReceber);

  return 0;
}

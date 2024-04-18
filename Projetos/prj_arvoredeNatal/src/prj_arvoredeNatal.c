/*
 ============================================================================
 Name        : prj_arvoredeNatal.c
 Author      : Maria Clara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/*int i,j,star,tamanho;
int main (int argc, char *argv[]){
  printf("Digite o numero de linhas(maior que 0):");
  scanf("%d",&tamanho);
  printf("\n");
  //Laço para imprimir a quantidade de linhas
  for(i=1;i<=tamanho;i++){
    //Laço para definir o espaçamento
    for(j=1;j<=tamanho-i;j++){
      printf(" ");
    }
  //Laço para imprimir os asteriscos e formar a arvore
    for(star=1;star<=(2*i)-1;star++){
      printf("*");
    }
    //Laço para imprimir #

  printf("\n");
  }
  printf("\n");
  printf("Feliz Natal e Prospero Ano Novo!!!\n");

  return 0;
}
//Atividade 2

int i,j, star, tamanho;;
int main (int argc, char *argv[]){
	 printf("Digite o numero de linhas(maior que 0):");
	  scanf("%d",&tamanho);
	  printf("\n");
	  //Laço para imprimir a quantidade de linhas
	  for(i=1;i<=tamanho;i++){
	    //Laço para definir o espaçamento
	    for(j=1;j<=tamanho-i;j++){
	      printf(" ");
	    }
	  //Laço para imprimir os asteriscos e formar a arvore

	    //Laço para imprimir #
	    for(star=1; star<=(2*i)-1;star++){
	    	if(star == 1 || star==(2*1)-1){
	    		printf("#");
	    	}else{
	    		printf("*");
	    	}

	  printf("\n");
	  }

	}

}
#include <stdio.h>
#include <stdlib.h>
//Arvore de Natal recursiva

int natalTree(int i, int j, int star, int tamanho, int argc, char *argv[]){
  return (i=1;i<=tamanho;i++) ? 1 : (j=1;j<=tamanho-i;j++) ? 1 : (star=1star<=(2*i)-1;star++);
}
int main(void){

}*/
void natalTree(int tamanho){
	printf("Digite o numero de linhas (maior que 0):");
	scanf("%d",&tamanho);

	//Laço para imprimir a quantidade de linha
	for(int i=1; i <= tamanho; i++){
		//Laço para definir o espaçamento
		for(int j=1; j<= tamanho -i; j++){
			printf("-");
			//laço para imprimir o asterisco
			for(int star=1; star<=(2*1)-1; star++){
				printf("*");
			}
		}
	}
}
// Online C compiler to run C program online
#include <stdio.h>

void natalTree(int tamanho){
	printf("Digite o numero de linhas (maior que 0):");
	scanf("%d",&tamanho);
	printf("\n");

	//Laço para imprimir a quantidade de linha
	for(int i=1; i <= tamanho; i++){
		//Laço para definir o espaçamento
		for(int j=1; j<= tamanho -i; j++)
			printf("-");

			//laço para imprimir o asterisco
			for(int star=1; star<=2*1-1; star++){
				printf("*");

			}
			printf("\n");
	}
}
int main(void){
    int tamanho;
    natalTree(tamanho);
    return 0;
}
 void natalTree2(int tamanho){
	 printf("Digite o numero de linhas (maior que 0):");
scanf("%d",&numero);
printf("\n");

for(int i=1; i<= tamanho; i++){
	for(int j=1; <= tamanho - i; j++){
		printf(" ");
}
 }
}

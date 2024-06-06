// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int telefone[50];
    char endereco[50];
    int id_pessoa
};


int main() {
    struct pessoa pessoa1;
    struct pessoa pessoa2;
    struct pessoa pessoa1;
    
strcpy(pessoa1.nome,"Maria");
pessoa1.telefone="00000000";
strcpy(pessoa1.endereco,"ruaxxx");
pessoa1.id_pessoa="0001";

struct pessoa pessoa2;
strcpy(pessoa2.nome,"Clara");
pessoa2.telefone="000000001";
strcpy(pessoa2.endereco,"ruaxxx1");
pessoa1.id_pessoa="0002";

printf("Pessoa 1 nome: %s\n", pessoa1.nome);
printf("Pessoa 1 telefone: %d\n", pessoa1.telefone);
printf("Pessoa 1 endereço: %s\n", pessoa1.endereco);
printf("Pessoa 1 id_pessoa: %d\n", pessoa1.id_pessoa);

printf("Pessoa  2 nome: %s\n", pessoa2.nome);
printf("Pessoa 2 telefone: %d\n", pessoa2.telefone);
printf("Pessoa 2 endereço: %s\n", pessoa2.endereco);
printf("Pessoa 2 id_pessoa: %d\n", pessoa2.id_pessoa);






    return 0;
}

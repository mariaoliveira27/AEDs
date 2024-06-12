// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
//Definição da classe carro
class carro {
    public:
    //membro da classe
    std::string marca;
    std:: string modelo;
    int ano;
    //construtor
    carro(const std::string &m, const std::string &mod, int a) :
        marca(m),modelo(mod), ano(a){
        }
        //construtor para criar um carro vazio
    carro() : marca(""), modelo(""), ano(0){
    }
    void exibirInformacoes(){
        std:: cout << "Marca: "<< marca <<", Modelo:"<< modelo <<", Ano:"<< ano << std:: endl;
    }
};
int main(void){
   //Criando um objeto da classe  carro
    carro meuCarro;
    //criando um objeto da classe carro usando o construtor 
    //carro meuCarro
    
    //atribuindo valores aos membros da classe 
    meuCarro.marca = "Toyota";
    meuCarro.modelo="Corolla";
    meuCarro.ano= 2022;
    
    meuCarro.exibirInformacoes();
    return 0;
}

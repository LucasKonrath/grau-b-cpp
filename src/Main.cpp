#include<iostream>
#include<vector>
#include<string>

#include "include/Pessoa.h"
#include "include/Arvore.h"

using namespace std;

int menu()
{
    //inicia uma variavel local de escolha
    int es;
    //mostra as opcoes
    cout <<"\n\n\n---------------------------------------------------------" <<endl;
    cout <<"\n1 - Create Pessoa"<<endl;
    cout <<"\n2 - remove pessoa"<<endl;
    cout <<"\n3 - update pessoa"<<endl;
    cout <<"\n4 - delete pessoa"<<endl;
    cout <<"\n5 - read pessoa "<<endl;
    cout <<"\n6 - read familia "<<endl;
    cout <<"\n7 - salvar os dados"<<endl;
    cout <<"\n8 - Sair do prog"<<endl;
    cout <<"\n-------------------------------------------------------------"<<endl;
    //pede pro usuario escolher um numero de 1 a 7
    cout <<"\nEscolha uma opcao: "<<endl;
    //atribui
    cin >> es;
    //retorna escolha
    return es;
}

int main()
{
    Pessoa *pai = new Pessoa("Josue",11, sxMasc, cocast, NULL, NULL);
    Pessoa *mae = new Pessoa("josefina",11,  sxFem, coverd, NULL, NULL);
    pai->imprimeDados();

    cout<<endl;

    mae->imprimeDados();

    cout<<endl;

    Pessoa *filho = mae->geraPessoa("Enzo",1, sxFem, pai);

    if(filho!=0)
        filho->imprimeDados();




}

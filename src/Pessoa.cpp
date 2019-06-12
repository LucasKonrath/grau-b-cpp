#include <sstream>
#include <iostream>

using namespace std;
#include "Pessoa.h"

Pessoa::Pessoa(string nome,int idade, Tsexo sexo, Tcorolhos cor, Pessoa *pai,Pessoa *mae)
{

    this->nome = nome;
    this->sexo = sexo;
    this->idade = idade;
    this->cor = cor;
    this->pai = pai;
    this->mae = mae;

}



string Pessoa::getNome()
{
    return this->nome;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

int Pessoa::getIdade()
{
    return this->idade;
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

string Pessoa::getSexostr()
{
    if(this->sexo==sxMasc)
        return "Masculino";
    if(this->sexo==sxFem)
        return "Feminino";
}
void Pessoa::setsexo(Tsexo sexo)
{
    if(sexo==0)
        this->sexo=sxMasc;
    if(sexo==1)
        this->sexo=sxFem;
}
string Pessoa::getCorOlhosstr()
{
    if(this->cor==coazul)
        return "Azul";
    if(this->cor==coverd)
        return "Verde";
    if(this->cor==cocast)
        return "Castanho";


}
void Pessoa::setcor(Tcorolhos cor)
{
    if(cor==0)
        this->cor=cocast;
    if(cor==1)
        this->cor=coverd;
    if(cor==2)
        this->cor=coazul;
}
void Pessoa::imprimeDados()
{

    cout << "Nome: " << this->getNome() << endl;
    cout << "Idade: " << this->getIdade() << endl;
    cout << "Sexo: " << this->getSexostr() << endl;
    cout << "Cor dos Olhos: " << this->getCorOlhosstr() << endl;
    if(this->pai !=0)
        cout << "Nome do Pai: " << pai->getNome() << endl;
    if(this->mae != 0)
        cout << "Nome do Mae: " << mae->getNome() << endl;
}
Pessoa* Pessoa::geraPessoa(string nome, int idade, Tsexo sexo, Pessoa *pai)
{
    if(this->sexo==sxFem)
    {
        if(pai->getSexostr()=="Masculino")
        {

            Tcorolhos cor;
            if(this->getCorOlhosstr()=="Castanho"&&pai->getCorOlhosstr()=="Castanho"||pai->getCorOlhosstr()=="Azul"||pai->getCorOlhosstr()=="Verde")
                cor=cocast;
            if(this->getCorOlhosstr()=="Verde"&&pai->getCorOlhosstr()=="Castanho")
                cor=cocast;
            if(this->getCorOlhosstr()=="Azul"&&pai->getCorOlhosstr()=="Castanho")
                cor=cocast;
            if(this->getCorOlhosstr()=="Verde"&&pai->getCorOlhosstr()=="Verde")
                cor=coverd;
            if(this->getCorOlhosstr()=="Verde"&&pai->getCorOlhosstr()=="Azul")
                cor=coverd;
            if(this->getCorOlhosstr()=="Azul"&&pai->getCorOlhosstr()=="Azul")
                cor=coazul;
            return new Pessoa(nome, idade, sexo, cor, pai, this);
        }

    }

    cout << "Orgao excretor não reproduz" <<endl;
    return 0;

}
string Pessoa::serialize()
{
    stringstream ss;
    ss << this->getNome()<< "\t" << this->getIdade()<< "\t" << this->getSexostr()<< "\t" << this->getCorOlhosstr()<< "\t";
    if(this->pai==NULL)
        ss<<"\t";
    else
        ss << this->pai->getNome()<< "\t";

    if(this->mae!=NULL)
        ss << this->mae->getNome();
    ss<<endl;
    return ss.str();
}

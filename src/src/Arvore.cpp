#include <vector>
#include <fstream>
#include <string>
#include<iostream>
#include<Pessoa.h>
using namespace std;

class Arvore
{
public:

    void salvarDados(string path)
    {
        fstream fs;
        vector<Pessoa*>::iterator it;
        fs.open(path.c_str(), fstream::out|fstream::trunc);
        if(fs.is_open())
        {
            for(it = listaPessoas.begin(); it!=listaPessoas.end(); it++)
                fs << (*it)->serialize();

            fs.close();
        }
        else
        {
            cout << "ERRO" <<endl;
        }
    }

    Pessoa carregarDados(string path)
    {
        fstream fs;

        vector<Pessoa*>::iterator it;
        fs.open(path.c_str(), fstream::out|fstream::trunc);
        if(fs.is_open())
        {
            for(it = listaPessoas.begin(); it!=listaPessoas.end(); it++)
                fs << (*it)->serialize();

            fs.close();
        }
        else
        {
            cout << "ERRO" <<endl;
        }
    }

    void inserirPessoa(Pessoa* pessoa)
    {
        listaPessoas.push_back(pessoa);
    }

    void removePessoa(Pessoa* pessoa)
    {

    }

protected:

private:
    vector <Pessoa*> listaPessoas;
};

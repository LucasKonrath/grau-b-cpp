#include <string>
using namespace std;


typedef enum { cocast, coverd, coazul } Tcorolhos;
typedef enum { sxMasc, sxFem } Tsexo;

class Pessoa
{

    Pessoa *pai, *mae;
    string nome;
    int idade, id;
    Tsexo sexo;
    Tcorolhos cor;


public:


    Pessoa(string nome,int idade, Tsexo sexo, Tcorolhos cor, Pessoa* pai,Pessoa* mae);
    Pessoa(string dados);
    string getNome();
    void setNome(string nome);
    int getIdade();
    void setIdade(int idade);
    string getSexostr();
    void setsexo(Tsexo sexo);
    string getCorOlhosstr();
    void setcor(Tcorolhos cor);
    void imprimeDados();
    Pessoa *geraPessoa(string nome, int idade, Tsexo sexo, Pessoa *pai);
    string serialize();
    string deserialize();

};

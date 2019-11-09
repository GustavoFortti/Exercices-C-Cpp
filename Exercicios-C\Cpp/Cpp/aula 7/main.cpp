#include <iostream>
#include <string.h>
using namespace std;

class PessoaFisica
{
public:
    char nome[100];
    char cpf[20];
    int idade;

};


int main(int argc, char **argv)
{
    //PessoaFisica p1;

    //strcpy(p1.nome, "gustavo");
    //strcpy(p1.cpf, "43702303812");
    //p1.idade = 22;

    //ou

    //PessoaFisica p1 = {"Gustavo", "44444444", 22};

    //ou

    
    PessoaFisica p1[3] = 
    {
        {"Gustavo", "44444444", 22},
        {"Austavo", "44444444", 23},
        {"Bustavo", "64444444", 24},
    };

    cout << p1[0].nome  << endl;

    return 0;
}
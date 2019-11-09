#include <iostream>
#include <string.h>

using namespace std;

typedef struct pessoa
{
    char nome[100];
    int idade;
}t_pessoa;


int main(int argc, char **argv)
{
    t_pessoa *p;
    t_pessoa pp[100];

    p = &pp[0];

    strcpy(p->nome, "gustavo");
    //p->idade = 26;

    cout << p->idade << endl;
    
    pp[0].idade = 10;
    pp[1].idade = 20;

    cout << p->idade << endl;
    cout << (p + 1)->idade << endl;

    /*
    //cout << argv[2] << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << argv[i] << endl;
    }
    
    */
    
    return 0;
}

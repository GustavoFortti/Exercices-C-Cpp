#include <iostream>
#include <stdbool.h>
#include <string.h>
#define max 10

using namespace std;

class Carro
{
    public:
        char nome[100];
        char cor[20];
        char placa[20];
        double preco;
};

void bubble (Carro carros[], int size)
{
    bool trocou;
    Carro aux;
    for (; trocou;)
    {
        trocou = false;
        for (int i = 0; i < size - 1; i++)
        {
            if ( strcmp(carros[i - 1].nome, carros[i].nome) == 1)
            {
                aux = carros[i - 1];
                carros[i - 1] = carros[i];
                carros[i] = aux;
            }
        }
        size--;
    }
    
}

int main(int argc, char const *argv[])
{
    Carro carros[max];
    int i = 0;

    while(true)
    {
        char resp;
        cin >> carros[i].nome;
        cin >> carros[i].preco;
        cin >> resp;
        if ( resp  != 's' || resp != 'S')
        {
            break;
        }
        i++;
    }

    bubble(carros, i);


    return 0;
}

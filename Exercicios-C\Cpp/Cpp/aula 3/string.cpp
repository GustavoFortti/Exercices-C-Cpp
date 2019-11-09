#include <iostream>

using namespace std;

char *concatena (char nome1[], char nome2[]);
int size(char nome[]);

int main()
{
    char *nome1 = new char[100];
    char *nome2 = new char[100];

    cin >> nome1 >> nome2;

    //char *nome = concatena(nome1, nome2);  
    char *resp =  concatena(nome1, nome2);
    cout << resp << endl;



    return 0;
}

char *concatena (char nome1[], char nome2[])
{
    int tam1 = size(nome1); 
    int tam2 = size(nome2); 
    char *resp = new char[tam1 + tam2];
    int i = 0;


    while ( i < tam1)
    {
        resp[i] = nome1[i];
        i++;
    }
    while ( i < tam2 + tam1)
    {
        resp[i] = *nome2;
        nome2++;
        i++;
    }
    
    return resp;
}

int size(char nome[])
{
    int i = 0;
    while (nome[i] != '\0')
    {
        i++;
    }
    return i;
}

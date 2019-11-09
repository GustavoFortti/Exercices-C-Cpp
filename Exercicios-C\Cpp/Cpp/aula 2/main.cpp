#include <iostream>

using namespace std;

int num = 12;

// variaveis static (estaticas) nao tem uma 2° declaração, ou seja ela mantem seu valor na memoria


void func(int x)
{
    //*val = 7;
    //static int num2 = 1;
    //cout << "valor: " << num2 << endl;
    //num2++;
}


int main()
{
    int *val = new int[3];
    //int *val;
    //int x = 10;
    //val = &x;
    *(val + 0)= 10;
    *(val + 1)= 11;
    *(val + 2)= 12;
    int val2[3];
    //func(&val);
    //cout << " " << *(val + 1) << endl;
    int i;
    for (i = 0; i < sizeof(val2)/sizeof(int); i++)
    {
        cout << *(val + i) << endl;
    }
    int j = sizeof(val)/sizeof(int);
    cout <<  j << endl;
    return 0;
}

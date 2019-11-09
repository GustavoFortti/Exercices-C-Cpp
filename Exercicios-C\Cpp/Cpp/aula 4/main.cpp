#include <iostream>

using namespace std;

int main ()
{

    int vet = 10;
    int *pt ;

    pt = &vet;

    cout << *pt << endl << &pt << endl << pt << endl;
    
    cout << &vet << endl << vet << endl;

    const int vet[] = {1, 2, 3};
    const int* p1 = &vet; //[0]; ele acusa erro mesmo funcionando
    int const* p2 = &vet; //[1];
    int* const p3 = new int[3];
    const char* const p4 = "Gustavo";

    cout << *p1 << endl;
    cout << *p2 << endl;

    *p3 = 1;
    *(p3 + 1) = 2;
    *(p3 + 2) = 3;

    cout << *p3 << endl;
    cout << *(p3 + 1) << endl;
    cout << *(p3 + 2) << endl;



    return 0;
}
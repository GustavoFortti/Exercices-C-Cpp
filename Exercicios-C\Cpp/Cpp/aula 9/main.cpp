#include <iostream>

using namespace std;

class Acount
{
public:
    int id;
    double balance;

    double deposit( double amount);
    double withdraw( double amount);
};

double Acount::deposit( double amount)
{
    if( amount > 0)
    {
        balance += amount;
    }
    return balance;
}

double Acount::withdraw( double amount)
{
    if( amount <= balance)
    {
        balance -= amount;
    }
    return balance;
}

int main()
{
    Acount c;
    Acount* pc = &c;

    (*pc).id = 1;
    (*pc).balance = 100.75;



    c.deposit(100);
    cout << c.balance << endl;
    c.withdraw(50);
    cout << c.balance << endl;
    
}

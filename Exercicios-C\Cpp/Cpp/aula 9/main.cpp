#include <iostream>

using namespace std;

class Acount
{
public:
    int id;
    double balance;

    double deposit( double amount)
    {
        if( amount > 0)
        {
            balance += amount;
        }
        return balance;
    }
    double withdraw( double amount)
    {
        if( amount <= balance)
        {
            balance -= amount;
        }
        return balance;
    }
};

int main()
{
    Acount c;

    c.id = 1;
    c.balance = 100.75;

    c.deposit(100);
    cout << c.balance << endl;
    c.withdraw(50);
    cout << c.balance << endl;
    
}
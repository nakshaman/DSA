#include <iostream>
using namespace std;

class BankAccount
{
public:
    int balance = 0;
    string accountType;
    BankAccount() {}
    BankAccount(string accountType)
    {
        this->accountType = accountType;
    }
    void printAccountType()
    {
        cout << this->accountType << endl;
    }
    void printBalance()
    {
        cout << this->balance << endl;
    }
    void setBalance(int value)
    {
        this->balance = value;
    }
};
int main()
{
    BankAccount person1 = BankAccount("savings");
    BankAccount person2 = BankAccount("current");
    person1.setBalance(900);
    person1.printAccountType();
    person1.printBalance();
    person2.printAccountType();
    person2.printBalance();
    return 0;
}
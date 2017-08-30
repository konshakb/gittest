#include <iostream>
#include <string>
#include "BankAccount.hpp"
 


using namespace std;

int main()
{
    BankAccount account1("Harry Potter", "K437", 8032.78);

    account1.withdraw(244.0);
    account1.withdraw(3012.58);
    account1.deposit(37.54);
    double finalBalance = account1.getCustomerBalance();
    cout << finalBalance << endl;

    cout << account1.getCustomerName() << endl;
    cout << account1.getCustomerID() << endl;

    return 0;

}

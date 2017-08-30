/************************************************************************
 ** Author:  Bryan Konshak
 ** Date:  4/26/2016
 ** Description:  BankAccount class that creates customer name, ID, and account balance, and uses functions to make deposits to
                  balance and withdraws from balance
 ************************************************************************/

#include <iostream>
#include <string>
#include "BankAccount.hpp"
using namespace std;

/***************************************************************************
** Description:  Constructor with two strings and a double that initializes
**               the data members
****************************************************************************/

BankAccount::BankAccount(string name, string ID, double balance)
{
    customerName = name;
    customerID = ID;
    customerBalance = balance;


}

string BankAccount::getCustomerName()  // get customer name function
{
    return customerName;
}

string BankAccount::getCustomerID()  //get customer ID
{
    return customerID;
}

/*************************************************************************
**  Description:  get customer balance, code block not necessarily needed
**
***************************************************************************/

double BankAccount::getCustomerBalance()
{
    return customerBalance;
}

/***************************************************************************
** Description:  function to subtract withdrawal from customer balance
**
***************************************************************************/


void BankAccount::withdraw(double amount)
{
    customerBalance -= amount;
}

/***************************************************************************
** Description:  function to add deposit to customer balance.
**
****************************************************************************/

void BankAccount::deposit(double amount)
{
    customerBalance += amount;



}

/*
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

*/

/**********************************************************************
**  Name: Bryan Konshak
**  Date:  4/26/2016
**  Description:  BankAccount header file
*************************************************************************/

//BankAccount.hpp spec file
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>




//bankAccount class declaration

class BankAccount
{
    private: //private member variables
        std::string customerName;
        std::string customerID;
        double customerBalance;

     public:  //public member functions
        
        BankAccount(std::string, std::string, double);
        std::string getCustomerName();
        std::string getCustomerID();
        double getCustomerBalance();
        void withdraw(double);
        void  deposit(double);
};
#endif

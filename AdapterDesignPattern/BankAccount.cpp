#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(const std::string& accountNumber)
    : mAccountNumber(accountNumber), 
    mBalance(0.0) 
{}

void BankAccount::deposit(double amount) 
{
    mBalance += amount;
    std::cout << "Deposited " << amount << " into account " << mAccountNumber << "." << std::endl;
}

bool BankAccount::withdraw(double amount) 
{
    if (mBalance >= amount) {
        mBalance -= amount;
        std::cout << "Withdrawn " << amount << " from account " << mAccountNumber << "." << std::endl;
        return true;
    }
    else {
        std::cout << "Insufficient balance in account " << mAccountNumber << "." << std::endl;
        return false;
    }
}

double BankAccount::getBalance() const 
{
    return mBalance;
}

std::string BankAccount::getAccountNumber() const 
{
    return mAccountNumber;
}
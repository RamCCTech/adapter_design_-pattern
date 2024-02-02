#include "UPIAdapter.h"
#include <iostream>

UPIAdapter::UPIAdapter(BankAccount* bank)
    : mBank(bank) 
{}

void UPIAdapter::pay(BankAccount* receiverAccount, const std::string& recipientName, double amount)
{
    if(mBank->withdraw(amount))
    {
        receiverAccount->deposit(amount);
        std::cout << "UPI Payment: " << amount << " transferred to " << recipientName << "." << std::endl;
    }
    else
    {
        std::cout << "Insufficient Balance."<< std::endl;
    }
}

void UPIAdapter::requestMoney(BankAccount* receiverAccount, const std::string& payerName, double amount)
{
    std::cout << payerName << " has requested " << amount << " from your account." << std::endl;
}

void UPIAdapter::checkBalance()
{
    std::cout << "Current balance for your account " << mBank->getAccountNumber() << "is " << mBank->getBalance() << std::endl;
}
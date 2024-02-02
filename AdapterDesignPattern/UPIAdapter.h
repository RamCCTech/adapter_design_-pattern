#pragma once
#include "BankAccount.h"

class UPIAdapter {
public:
    UPIAdapter(BankAccount* bank);
    void pay(BankAccount* receiverAccount, const std::string& recipientName, double amount);
    void requestMoney(BankAccount* receiverAccount, const std::string& payerName, double amount);
    void checkBalance();

private:
    BankAccount* mBank;
};
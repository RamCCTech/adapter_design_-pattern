#pragma once
#include <string>

class BankAccount {
public:
    BankAccount(const std::string& accountNumber);
    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
    std::string getAccountNumber() const;

private:
    std::string mAccountNumber;
    double mBalance;
};
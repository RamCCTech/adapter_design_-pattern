#include "BankAccount.h"
#include "UPIAdapter.h"
#include <iostream>

int main() {

    BankAccount myBank("1234567890");
    BankAccount receiverBank("9876543210");

    myBank.deposit(1000.0);

    UPIAdapter upiAdapter(&myBank);

    upiAdapter.pay(&receiverBank, "Receiver Account", 200.0);

    std::cout << "\nBalances after UPI payment:" << std::endl;
    std::cout << "Sender's account (" << myBank.getAccountNumber() << "): " << myBank.getBalance() << std::endl;
    std::cout << "Receiver's account (" << receiverBank.getAccountNumber() << "): " << receiverBank.getBalance() << std::endl;

    return 0;
}

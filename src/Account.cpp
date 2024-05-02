#include "Account.hpp"
#include <string>

void Account::deposit(float amount) {
    if(amount > 0)
        balance += amount;
}

void Account::withdraw(float amount) {
    if(amount > 0)
        balance -= amount;
}

void Account::setOwnerName(std::string _name) {
    name = _name;
}

float Account::getBalance() const {
    return balance;
}

std::string Account::getName() const {
    return name;
}

std::string Account::getCpf() const {
    return cpf;
}

std::string Account::getNumber() const {
    return number;
}
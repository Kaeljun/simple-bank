#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

using std::string;

class Account {
    private:
        string number;
        string cpf;
        string name;
        float balance = 0;

    public:
        Account(string name, string cpf, string number);
        void deposit(float amount);
        void withdraw(float amount);
        void setOwnerName(string name);
        float getBalance() const;
        string getName() const;
        string getCpf() const;
        string  getNumber() const;
};

#endif
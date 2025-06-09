//============================================================================
// Name        : bank.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <fstream>
using namespace std;

class Bank {
public:
    string name;
    int accNo;
    double balance;

    void openAccount() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Initial Deposit: ";
        cin >> balance;
        cout << "Account Created Successfully!\n";
    }

    void depositMoney() {
        double amount;
        cout << "Enter Amount to Deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit Successful! New Balance: " << balance << endl;
    }

    void withdrawMoney() {
        double amount;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawal Successful! New Balance: " << balance << endl;
        }
    }

    void displayAccount() {
        cout << "Account Holder: " << name << "\nAccount Number: " << accNo << "\nBalance: " << balance << endl;
    }
};

int main() {
    Bank account;
    int choice;
    while (true) {
        cout << "\n1. Open Account\n2. Deposit Money\n3. Withdraw Money\n4. Display Account\n5. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: account.openAccount(); break;
            case 2: account.depositMoney(); break;
            case 3: account.withdrawMoney(); break;
            case 4: account.displayAccount(); break;
            case 5: return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    /* constructor */
    BankAccount(double initialBalance) : balance(initialBalance) {}
    /* same as if I wrote :
    *     BankAccount(double initialBalance){
            balance = initialBalance
            }
    */

    /* does not modify the account's state */
    void showMenu() const {
        cout << "+++++++++++++++++++Menu+++++++++++++++++++" << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit menu" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;
    }

    /* Displays the current balance without changing it */
    void checkBalance() const {
        cout << "Balance is " << balance << " $" << endl;
    }

    /* not marked const because it modifies the balance */
    void deposit() {
        double depositAmount;
        cout << "Deposit amount: ";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "Balance is " << balance << " $" << endl;
    }


    /* not marked const because it modifies the balance */
    void withdraw() {
        double withdrawAmount;
        cout << "Withdraw amount: ";
        cin >> withdrawAmount;
        if (balance >= withdrawAmount) {
            balance -= withdrawAmount;
            cout << "Balance is " << balance << " $" << endl;
        }
        else {
            cout << "Not enough money." << endl;
        }
    }

    void run() {
        int option;
        do {
            showMenu();
            cout << "Option: ";
            cin >> option;
            system("cls");

            switch (option) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Enter a valid option." << endl;
            }
        } while (option != 4);
    }
};

int main() {
    BankAccount account(1000); // Initialize account with $1000
    account.run();
    return 0;
}

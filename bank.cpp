#include <iostream>
using namespace std;

void showMenu() {
    cout << "+++++++++++++++++++Menu+++++++++++++++++++"<<endl;
    cout << "1. check balance" << endl;
    cout << "2. deposit" << endl;
    cout << "3. withdraw" << endl;
    cout << "4. Exit menu" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;
}   

int main() {
    
    int Option;
    double balance = 1000;
    double depositeAmount;
    double withdrawnAmount;
    do {
        showMenu();

        cout << "option: ";
        cin >> Option;
        system("cls");
        if (5 > Option && Option > 0) {
            switch (Option)
            {
            case 1:
                cout << "balance is " << balance << " $" << endl;
                break;
            case 2:
                cout << "depoite amount: ";
                cin >> depositeAmount;
                balance += depositeAmount;
                cout << "balance is " << balance << " $" << endl;
                break;
            case 3:
                cout << "withdrawn amount:";
                cin >> withdrawnAmount;
                if (balance >= withdrawnAmount) {
                    balance -= withdrawnAmount;
                    cout << "balance is " << balance << " $" << endl;
                }
                else
                    cout << "not enough money." << endl;
                break;
            default:
                break;
            }
        }

        else
            cout << "Enter a valid Option: " << endl;
    
    }
    while (Option != 4);
}
#include <iostream>
using namespace std;

class account {
protected:
    char name[25];
    int accno;
    char type;
    int bal;

public:
    void input() {
        cout << "Enter customer name(without space): "; cin >> name;
        cout << "Enter account number: "; cin >> accno;
        fflush(stdin);
        cout << "Enter type of account (S/C for Savings/Current): "; cin >> type;
        fflush(stdin);
        cout << "Enter balance: "; cin >> bal;
    }

    void display() {
        cout << "\nCustomer Name: " << name;
        cout << "\nAccount Number: " << accno;
        cout << "\nType of Account: " << (type == 'S' ? "Savings" : "Current");
        cout << "\nBalance: " << bal << endl;
    }

    void deposit() {
        int amt;
        cout << "Enter the amount to deposit: ";
        cin >> amt;
        bal += amt;
        cout << "New balance: " << bal << endl;
    }

    void withdraw() {
        int amt;
        cout << "Enter the amount to withdraw: ";
        cin >> amt;
        if (amt > bal) {
            cout << "Insufficient balance!" << endl;
        } else {
            bal -= amt;
            cout << "New balance: " << bal << endl;
        }
    }
};

int main() {
    account C1;
    C1.input();
    C1.display();

    int choice;
    do {
        cout << "Choose an action (1 -> deposit, 2 -> withdraw, 3 -> done): ";
        cin >> choice;

        switch (choice) {
            case 1:
                C1.deposit();
                break;
            case 2:
                C1.withdraw();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}

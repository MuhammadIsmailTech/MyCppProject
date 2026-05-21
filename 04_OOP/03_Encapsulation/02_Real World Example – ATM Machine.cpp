#include <iostream>
using namespace std;

class ATM 
{
private:
    int pin = 1234;
    double balance = 10000;
public:
    void withdraw(int enteredPin, double amount) 
{
        if (enteredPin == pin) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Please collect your cash." << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Invalid PIN!" << endl;
        }
    }
 void checkBalance(int enteredPin)
 {
        if (enteredPin == pin) {
            cout << "Your balance is: $" << balance << endl;
        } else {
            cout << "Invalid PIN!" << endl;
        }
    }
};

int main() 
{
    ATM myATM;
    int pin;
    double amount;

    cout << "Enter your PIN: ";
    cin >> pin;

    cout << "1. Withdraw" << endl;
    cout << "2. Check Balance" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            myATM.withdraw(pin, amount);
            break;
        case 2:
            myATM.checkBalance(pin);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
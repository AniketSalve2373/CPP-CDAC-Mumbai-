#include<iostream>
using namespace std;

class BankAccount {
    private:
    int accountNumber;
    string holderName;
    double balance;

public:
    void setData(int acc, string name, double bal)
    {
        accountNumber = acc;
        holderName = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposited.\n";
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    void display()
    {
        cout << "Account No: " << accountNumber << endl;
        cout << "Name: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }

};

int main()
{
    BankAccount b;
    int choice;
    int acc;
    string name;
    double bal;

    cout << "Enter account number: ";
    cin >> acc;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter initial balance: ";
    cin >> bal;

    b.setData(acc, name, bal);

    do
    {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        double amt;

        if (choice == 1)
        {
            cout << "Enter amount: ";
            cin >> amt;
            b.deposit(amt);
        }
        else if (choice == 2)
        {
            cout << "Enter amount: ";
            cin >> amt;
            b.withdraw(amt);
        }
        else if (choice == 3)
        {
            b.display();
        }

    } while (choice != 4);

    return 0;
}
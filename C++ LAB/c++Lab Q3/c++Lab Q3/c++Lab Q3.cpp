#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int acc;
    string type;
    float balance;
public:
    void input();
    void deposit();
    void withdraw();
    void display();
};

void BankAccount::input() {
    string a;int b;string c;float d;
    cout << "Enter name and your account type :\n";
    cin >> a >> c;
    cout << "\n\n";
    cout << "Please enter your account number :";
    cin >> b;
    cout << "\n\n";
    cout << "Please enter your account balance";
    cin >> d;
    cout << "\n\n";
    name = a;
    acc = b;
    type = c;
    balance = d + 500.00;
}

void BankAccount::deposit() {
    cout << "Enter the depositing amount :";
    float a;
    cin >> a;
    balance = balance + a;
}

void BankAccount::withdraw() {
    cout << "Enter the withdrawing amount :";
    float a;
    cin >> a;
    if (balance >= a) {
        balance = balance - a;
    }
    else { cout << "your balance :" << balance << "\nyou can withdraw that amount\n\n"; }
}

void BankAccount::display() {
    cout << name << "\n" << acc << "\n" << type << "\n" << balance << "\n";
}

int main() {
    BankAccount acc1;
    string user;
    while (user != "exit") {
        cout << "\n       #WELCOME TO BANK SERVICES#         ";
        cout << "\n ==============================================                         ";
        cout << "\n1) Adding new account";
        cout << "\n2) Withdraw";
        cout << "\n3) Deposit";
        cout << "\n4) Balance enquiry";
        cout << "\n5) Account statement";
        cout << "\nEnter 0 to stop the program \n\n";

        cout << "\n\nEnter your choice : ";cin >> user;
        if (user == "1") { acc1.input(); }
        else if (user == "2") { acc1.withdraw(); }
        else if (user == "3") { acc1.deposit(); }
        else if (user == "4") { acc1.display(); }
        else if (user == "5") { acc1.display(); }
        else if (user == "0") { exit(0); }
        else if (user != "0") { cout << "you have entered a wrong opt \n\n"; }
    }
}
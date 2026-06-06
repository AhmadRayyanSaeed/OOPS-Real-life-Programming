//Banking System
//Problem: Multiple account types with common operations. Inheritance Solution: Base class
//BankAccount; derived classes SavingsAccount, CurrentAccount, FixedDepositAccount.
//Why useful: Reuse deposit/withdraw while adding interest rules, overdraft, or lock-in
//period.

#include<iostream>
using namespace std;

class BankAccount{
protected:
    double balance;

public:
    void deposit(double amount){
        balance += amount;
        cout<<"Deposited: "<<amount<<endl;
    }

    void withdraw(double amount){
        if(amount <= balance){
            balance -= amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
        else{
            cout<<"Insufficient Balance!"<<endl;
        }
    }

    void showBalance(){
        cout<<"Balance: "<<balance<<endl;
    }
};


class SavingsAccount : public BankAccount{
public:
    void addInterest(){
        double interest = balance * 0.05;
        balance += interest;
        cout<<"Interest Added: "<<interest<<endl;
    }
};

class CurrentAccount : public BankAccount{
public:
    void overdraft(double amount){
        balance -= amount;
        cout<<"Overdraft Used: "<<amount<<endl;
    }
};

class FixedDepositAccount : public BankAccount{
public:
    void lockPeriod(){
        cout<<"Account is locked for fixed period!"<<endl;
    }
};

int main(){

    SavingsAccount sa;
    sa.deposit(1000);
    sa.addInterest();
    sa.showBalance();

    cout<<endl;

    CurrentAccount ca;
    ca.deposit(2000);
    ca.overdraft(500);
    ca.showBalance();

    cout<<endl;

    FixedDepositAccount fd;
    fd.deposit(5000);
    fd.lockPeriod();
    fd.showBalance();

    return 0;
}

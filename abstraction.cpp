#include<iostream>
using namespace std;
class BankAccount{
    private:
    double balance; //hidden from user
    public:
    BankAccount(double initialBalance){
        balance=initialBalance;
    }
    //function exposed to user
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(amount<=balance){
            balance-=amount;
        }
        else{
            cout<<"insufficient balance."<<endl;
        }
    }
    double getBalance(){
        return balance;
    }

};
int main(){
    BankAccount account(1000.0); //initial balance
    cout<<"initial balance: "<<account.getBalance()<<endl;
    account.deposit(500.0);
    cout<<"balance after deposit: "<<account.getBalance()<<endl;
    account.withdraw(200.0);
    cout<<"balance after withdrawal: "<<account.getBalance()<<endl;
    account.withdraw(1500.0); //attempt to withdraw more than balance
    return 0;
}
#include <iostream>
using namespace std;
class FirstAccount{
    friend class Bank;
private: int balance;
};
class SecondAccount{
    friend class Bank;
private : int balance;
};
class Bank{
    friend int main(int argc, const char * argv[]);
private: 
void setBalance(FirstAccount first, SecondAccount second){
    cin >> first.balance; 
    cin >> second.balance;
}
void checkBalance(FirstAccount first, SecondAccount second){
    cout<<first.balance<<second.balance;
}
void send(FirstAccount &first, SecondAccount &second, string point, int amount){
    if(point == "to first"){
second.balance -= amount;
first.balance += amount;
    }else if(point == "to second"){
        first.balance -= amount;
        second.balance += amount;
    }else{
        cout<<"Error";
    }
}

};
int main(int argc, const char * argv[]){
Bank bank;
FirstAccount first;
SecondAccount second;
bank.setBalance(first, second);
bank.send(first, second, "to first", 100);
bank.checkBalance(first,second);
}
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){
    string word;
    cin >> word;
    try{
        if(word == "Hello")
        throw 123;
        cout<<"okay";
    }catch(int e){
        cout<<"Error";
    }
    cin.get();
}
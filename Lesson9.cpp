#include <iostream>

using namespace std;

int main(int argc, const char * argv[]){
    int number = 10;
    int *ptrnumber = &number;
cin >> *ptrnumber;
cout<<*ptrnumber<<endl;

int value = 0;
int &ref = value;
cin >> ref;
cout<< value << endl;

    cin.get();
    return 0;
}
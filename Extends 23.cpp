#include <iostream>
using namespace std;

class FirstClass{
protected: string nameOfClass1;
};
class SecondClass : public FirstClass{
protected: string nameOfClass2;
public:
void SetnameOfClass1(string name){
nameOfClass1 = name;
cout<< nameOfClass1;
}
};
int main(int argc, const char * argv[]){
FirstClass first;
SecondClass second;
second.SetnameOfClass1("class");
    return 0;
}
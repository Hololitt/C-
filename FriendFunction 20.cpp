#include <iostream>
using namespace std;
class Machine2;
class Machine1{
     friend int sum(Machine1, Machine2);
     private:
    int a;
    public: 
    Machine1(){
        cout<<"Enter value a: ";
cin >> a;
    }
};
class Machine2{
    friend int sum(Machine1, Machine2);
    private: 
    int b;
    public:
    Machine2(){
        cout<<"Enter value b: ";
        cin >> b;
    }
};
int sum(Machine1 machine1, Machine2 machine2){
    cout<< "result : ";
    return (machine1.a + machine2.b);
}
int main(int argc, const char * argv[]){
Machine1 machine1;
Machine2 machine2;
cout<<sum(machine1, machine2);
    return 0;
}
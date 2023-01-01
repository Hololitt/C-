#include <iostream>
using namespace std;

class Object1{
   public: int array[9][9];
    public:
virtual void work(){
    for(int i = 0; i<sizeof(array)/sizeof(int); i++){
for(int j = 0; j<sizeof(array)/sizeof(int); j++){
    array[i][j] = i+j;
}
    }
}
};
class Object2 : public Object1{
void work() override{
cout<<"something"<<endl;
for(int i = 0; i<sizeof(array)/sizeof(int);i++){
    for(int j = 0; j<sizeof(array)/sizeof(int);i++){
        cout<<array[i][j]<<endl;
    }
}
}
};
class Object3 : public Object2{
void work() override{
cout<<"End of programm";
}
};
 void start(Object1& a){
    a.work();
 }
 int main(int argc, const char * argv[]){
    Object1 obj1;
    Object2 obj2;
    Object3 obj3;

cout<<"Enter your class";
int numberOfClass;
cin>>numberOfClass;
switch(numberOfClass){
    case 1: start(obj1);
    break;
    case 2: start(obj2);
    break;
    case 3: start(obj3);
    break;
    default: cout<<"Unexcepted object";
    break;
}
    return 0;
 }
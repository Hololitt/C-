#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){
Human human;
int id;
string name;
cin >> id;
cin >> name;
human.setAll(id, name);

    return 0;
}
class Human{
private: 
int id;
string name;
public: 
void setAll(int id, string name){
this->id = id;
this->name = name;
}
void enterAll(int num){
switch(num){
    case 1:
cout << id << " " << name << endl;
break;
case 2:
cout << id << endl;
break;
case 3: 
cout << name << endl;
default:
cout << "Unexcepted number";
break;
}
}
};
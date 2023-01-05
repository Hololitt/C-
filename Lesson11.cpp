#include <iostream>
using namespace std;
struct Date{
    int dateOfCreat;
};
struct Human{
    Human(int thisAge, string thisName){
        age = thisAge;
        name = thisName;
    }
    Date creat;
    int age;
    string name;
};

int main(int argc, const char * argv[]){
Human human(12, "Mike");
Date date;
date.dateOfCreat = 2001;
try{
    cout<<"Enter age of human";
    cin >> human.age;
if(human.age == 0){
    throw 101;
}else{
    cout<<"Enter name of human";
    cin >> human.name;
    if(human.name.size() == 1){
        throw 101;
    }
}
}catch(int exception){
    cout<<"Error";
}


}
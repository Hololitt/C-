#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){
    int id;
    string name;
    string kindOfWork;
    try{
cin >> id;
cin >> name;
 cin >> kindOfWork;
if(id > 10){
    throw 101;
}else if(name.size() == 0){
throw 101;
}else if(kindOfWork.size() == 0){
    throw 101;
}
    }catch(int exception){
cout << "Error";
    }
   Machine m1();

    return 0;
}
class Machine{
    int array[5][5];
   private: int id;
    string name; 
    string kindOfWork;
    Machine(int id, string name, string kindOfWork){
this->id = id;
this->name = name;
this->kindOfWork = kindOfWork;
    }
    public: 
    void test(){
        cout << id << " " << name << " " << kindOfWork << endl;
cout << array << endl;
    }
    void doWork(){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                array[i][j];
            }
        }
    }
    ~Machine(){
        cout << "Programm is finished";
    }
};
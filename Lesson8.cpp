#include <iostream>

using namespace std;

int main(int argc, const char * argv[]){
    int array[5] = {2, 5, 3};
    for(int i = 0; i < 3; i++){
        cout<<" "<<array[i];
    }
    int array2[2];
    cin >> array2[0];
    cin >> array2[1];
   try{
    if(array2[0] == array2[1])
    throw 101;
    cout<<"okay";
   }catch(int exception){
    cout<<"Error";
   }
   cin.get();
   return 0;
}
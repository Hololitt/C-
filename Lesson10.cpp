#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){
int *ptarray = new int [10];
for(int i = 0; i<10; i++){
    ptarray[i] = i;
    cout<<ptarray[i];
}
delete[] ptarray;

    cin.get();
    return 0;
}
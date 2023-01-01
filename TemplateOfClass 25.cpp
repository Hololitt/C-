#include <iostream>
using namespace std;

template <class Type>

class workWithArray{
    private: Type array[3];

public: workWithArray(Type *a){
    for(int i = 0; i<3; i++){
        array[i] = a[i];
    }
}
Type getElement(int e){
    return array[e];
}
};
int main(int argc, const char * argv[]){

int array1[] = {3,5,1};
float array2[] = {5.31, 21.2};

workWithArray<int> work(array1);
workWithArray<float> work1(array2);
cout<<work1.getElement(0)<<endl;
cout<<work.getElement(0)<<endl;
}
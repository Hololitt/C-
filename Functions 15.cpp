#include <iostream>
using namespace std;
struct Test{
  void work(int a, int b){
    int result = a + b;
   cout<< result;

  }
};

int main(int argc, const char * argv[]){ 
Test test;

    return 0;
}
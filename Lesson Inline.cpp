#include <iostream>
using namespace std;

inline int func(int a, int b){     //капелька семантичности. Производится меньше операций для вычисления. Не работает для сложный функций
return a + b;
}
int main(int argc, const char * argv[]){
    cout<<func(2, 9);
    return 0;
}
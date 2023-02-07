#include <iostream>
using namespace std;
int main()
{
    double nextNumber, result;
char sign;
setlocale(0,"");
cout<<"Программа для решения простых уравнений";
cout<<"x sign y = result"<<endl;
cout<<"Введите число после неизвестного:";
cin>>nextNumber;
cout<<"Введите результат исчисления:";
cin>>result;
cout<<"Введите знак(+ - / *):";
cin>>sign;
switch(sign){
    case '+': cout<<"x = "<<result-nextNumber<<endl; break;
    case '-': cout<<"x = "<<result+nextNumber<<endl; break;
    case '/' && '%': cout<<"x = "<<result*nextNumber<<endl; break;
    case '*': cout<<"x = "<<result/nextNumber<<endl; break;
    default: cout<<"Unknown value"<<endl;
}
return 0;
}

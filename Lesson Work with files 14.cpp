#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]){
  std::string line;
 
    std::ifstream in("C:\\Games\\hello.txt"); 
    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();    
     
    std::cout << "End of program" << std::endl;
    return 0;
}

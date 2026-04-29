#include <iostream>

int main(){
   std::string str = "hello";
   for(int i = 0; i < str.length(); i++){
      std::cout << str[i] << std::endl;
   }
}
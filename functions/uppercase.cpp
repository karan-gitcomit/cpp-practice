#include <iostream>

void uppercaseStr(std::string str){
    for(int i = 0; i < str.length(); i++){
        str[i] = toupper(str[i]);
        std::cout << str[i] << "";
    }
}

int main(){
    std::string str = "hello world";
    uppercaseStr(str);
}
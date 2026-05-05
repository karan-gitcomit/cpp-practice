#include <iostream>

std::string stringReverse(std::string str){
    if(str == "") return "";
    return stringReverse(str.substr(1)) + str[0];
}

int main(){
    std::cout << stringReverse("hello") << "";
}
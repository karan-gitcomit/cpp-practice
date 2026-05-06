#include <iostream>

std::string reverseString(std::string str){
    if(str == "") return "";
    return reverseString(str.substr(1)) + str[0];
}

int main(){
    std::string result = reverseString("hello");
    std::cout << result << "";
}
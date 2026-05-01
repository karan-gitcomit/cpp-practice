#include <iostream>

int countVowels(std::string str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || 
        str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count += 1;
        }
    }
    return count;
}

int main(){
    std::string str = "hello world";
    int vowels = countVowels(str);
    std::cout << "The number of vowels in " << str << " are " << vowels << " vowels";
}
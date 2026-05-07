#include <iostream>

int countDigits(int n){
    int count = 0;
    if(n >= 0 && n <= 9) return 1;
    return 1 + countDigits(n / 10);
}

int main(){
    int result = countDigits(2345);
    std::cout << result << std::endl;
}
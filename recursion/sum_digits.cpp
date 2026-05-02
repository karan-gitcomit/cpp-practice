#include <iostream>

int sumDigits(int n){
    if(n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main(){
    int n = 1234;
    int result = sumDigits(n);
    std::cout << "The sum of the digits is " << result << std::endl;
}

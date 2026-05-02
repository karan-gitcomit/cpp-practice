#include <iostream>

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n = 5;
    int result = fibonacci(n);
    std::cout << "The fibonacci sequence of " << n << " is " << result << std::endl;
}
#include <iostream>

int power(int x, int n){
     if(n == 0) return 1;
     return x * power(x, n - 1);
}

int main(){
    int x = 2;
    int n = 4;
    int result = power(x,n);
    std::cout << "The power is " << result << std::endl;
}
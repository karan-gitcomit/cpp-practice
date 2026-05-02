#include <iostream>

void printNumbers(int n){
    if(n == 0) return;
    std::cout << n << " ";
    printNumbers(n - 1);
}

int main(){
    printNumbers(5);
}
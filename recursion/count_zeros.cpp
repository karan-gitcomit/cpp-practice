#include <iostream>

int countZeros(int n){
    if(n == 0) return 0;
    if(n % 10 == 0){
        return 1 + countZeros(n / 10);
    }
    else{
        return countZeros(n / 10);
    }
}

int main(){
    int n = 10203;
    int result = countZeros(n);
    std::cout << "The number of 0's in " << n << " is " << result << std::endl;
}
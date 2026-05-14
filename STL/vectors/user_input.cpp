#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums;

    std::cout << "Enter 5 numbers: ";

    for(int i = 0; i < 5; i++){
        int x;
        std::cin >> x;
        nums.push_back(x);
    }

    std::cout << "You Entered: ";

    for(int n : nums){
        std::cout << n << " ";
    }
}
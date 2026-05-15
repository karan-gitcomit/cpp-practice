#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i: nums){
        if(i % 2 != 0) std::cout << i << " ";
    }
}
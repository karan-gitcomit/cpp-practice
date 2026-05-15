#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {10, 20, 30, 40, 50};
    int sum = 0;
    int avg;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }

    avg = sum/nums.size();
    
    std::cout << "The sum of the vector is: " << sum << std::endl;
    std::cout << "The avg of the vector is: " << avg << std::endl;
}
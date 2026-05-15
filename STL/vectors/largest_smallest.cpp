#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {5, 2, 8, 1, 9, 3};

    int max = nums[0];
    int min = nums[0];

    for(int i = 0; i < nums.size(); i++){
        if(max < nums[i]){
            max = nums[i];
        }
        if(min > nums[i]){
            min = nums[i];
        }
    }

    std::cout << "The largest element in the vector is: " << max << std::endl;
    std::cout << "The smallest element in the vector is: " << min << std::endl;

}
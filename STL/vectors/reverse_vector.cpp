#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int start = 0;
    int end = nums.size() - 1;

    while(start < end){
        std::swap(nums[start],nums[end]);
        start++;
        end--;
    }

    for(int i = 0; i < nums.size(); i++){
        std::cout << nums[i] << " ";
    }
}
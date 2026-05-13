#include <iostream>
#include <algorithm>

int binarySearch(int arr[], int low, int high, int target){
    if(low > high) return -1;
    int mid = (low + high) / 2;
    if(arr[mid] == target) return mid;
    if(target < arr[mid]) return binarySearch(arr, low, mid - 1, target);
    else{
        return binarySearch(arr , mid + 1, high, target);
    }
    

}

int main(){
    int arr[] = {7,  11,  5,  12,  9,  3};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::sort(arr, arr + size);
    int result = binarySearch(arr, 0, size - 1, 7);
    std::cout << "The targetted element index is " <<result << std::endl;
}
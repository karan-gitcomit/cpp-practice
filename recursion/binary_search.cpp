#include <iostream>

int binarySearch(int arr[], int low, int high, int target){
    int mid = (low + high) / 2;

    if(low > high) return -1;
    if(arr[mid] == target) return mid;
    
    if(low > mid)
}
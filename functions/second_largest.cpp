#include <iostream>

int secondLargest(int* arr, int size){
    int max = arr[0];
    int secondMax = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0; i < size; i++){
        if(arr[i] > secondMax && arr[i] < max){
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main(){
    int arr[] = {5, 2, 8, 1, 9, 3};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    int a = secondLargest(arr,arrsize);
    std::cout << "The second largest element in the array is " << a << std::endl;
}
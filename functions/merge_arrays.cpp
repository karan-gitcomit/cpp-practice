#include <iostream>

void mergeArray(int* arr1, int* arr2, int size1, int size2){
    int arr3[size1 + size2];

    for(int i = 0; i < size1; i++){
        arr3[i] = arr1[i];
    }
    
    for(int i = 0; i < size2; i++){
        arr3[size1 + i] = arr2[i];
    }

    for(int i = 0; i < size1 + size2; i++){
        std::cout << arr3[i] << " ";
    }

}

int main(){
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6,7,8};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    mergeArray(arr1,arr2,size1,size2);
}
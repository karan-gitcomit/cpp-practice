#include <iostream>

bool are_Equal(int* arr1, int* arr2, int size1, int size2){
    if(size1 != size2){
        return false;
    }

    for(int i = 0; i < size1; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[] = {1,2,3,4,5,6,7};
    int arrsize1 = sizeof(arr1)/sizeof(arr1[0]);
    int arrsize2 = sizeof(arr2)/sizeof(arr2[0]);

    bool equal = are_Equal(arr1,arr2,arrsize1,arrsize2);
    std::cout << (equal ? "Equal" : "Not Equal") << std::endl;


}
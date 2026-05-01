#include <iostream> 

void removeDuplicate(int* arr, int size){
    for(int i = 0; i < size; i++){
        bool isDuplicate = false;
        for(int j = 0; j < i; j++){
            if(arr[j] == arr[i]){
                isDuplicate = true;
                break;
            }
        }
    if(!isDuplicate){
        std::cout << arr[i] << " ";
    }  
    }
}

int main(){
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    removeDuplicate(arr,size);
}
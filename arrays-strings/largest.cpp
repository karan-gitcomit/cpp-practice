#include <iostream>


int main(){
   int arr[] = {3, 7, 1, 9, 4};
   int max = arr[0];
   int size = sizeof(arr)/sizeof(arr[0]);
   for(int i = 0; i < size; i++){
      if(arr[i] > max){
         max = arr[i];
      }
   }
   std::cout << max << std::endl;
   return 0;
}
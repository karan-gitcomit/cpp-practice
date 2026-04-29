#include <iostream>


int main(){
   int arr[] = {3, 7, 1, 9, 4};
   int size = sizeof(arr)/sizeof(arr[0]);
   int sum = 0;
   for(int i = 0; i < size; i++){
      sum += arr[i];
      
   }
   std::cout << sum << std::endl;
   
   return 0;
}
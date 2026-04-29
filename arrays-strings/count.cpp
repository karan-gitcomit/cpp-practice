#include <iostream>


int main(){
   int arr[] = {3, 7, 1, 9, 4, 7, 2, 7};
   int size = sizeof(arr)/sizeof(arr[0]);
   int count = 0;
   int target = 7;

   for(int i = 0; i < size; i++){
      if(arr[i] == target){
         count += 1;
      }
   }
   std::cout << "7 comes " << count << " times!" << std::endl;
   return 0;

}
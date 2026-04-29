#include <iostream>

int main(){
   int arr[5];
   std::cout << "Enter 5 Numbers: " << std::endl;
   for(int i = 0; i < 5; i++){
      std::cin >> arr[i];
   }

   for(int i = 0; i < 5; i++){
      std::cout << arr[i] << std::endl;
   }
   return 0;
}
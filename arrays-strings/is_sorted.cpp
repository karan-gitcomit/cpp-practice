#include <iostream>

int main(){
   int arr[] = {1, 8, 5, 7, 9};
   int size = sizeof(arr)/sizeof(arr[0]);
   bool isSorted = true;

   for(int i = 0; i < size - 1; i++){
      if(arr[i] > arr[i+1]){
         isSorted = false;
         break;
   }
}

if(isSorted){
   std::cout << "Sorted" << std::endl;
}
else{
   std::cout << "Not Sorted" << std::endl;
}
}
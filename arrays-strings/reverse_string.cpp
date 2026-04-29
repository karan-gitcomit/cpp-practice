#include <iostream>

int main(){
   std::string str = "hello";
   int start = 0;
   int end = str.length() - 1;

   while(start < end){
      int temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      start++;
      end--;
      }

      for(int i = 0; i < str.length(); i++){
         std::cout << str[i] << std::endl;
      }
}
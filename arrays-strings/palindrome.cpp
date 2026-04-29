#include <iostream>

int main(){
   std::string str = "racecar";
   int start = 0;
   int end = str.length() - 1;
   bool isPal = true;
   while(start < end){
      if(str[start] != str[end]){
         isPal = false;
      }
      start++;
      end--;

   }
   
   
      if(isPal){
         std::cout << "Palindrome" << std::endl;
      }
      else{
         std::cout << "Not Palindrome" << std::endl;
      }
   

  

}
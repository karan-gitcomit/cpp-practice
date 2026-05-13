#include <iostream>

void toh(int n, int a, int b, int c){
    if(n == 0) return;
    toh(n-1,a,c,b);
    std::cout << " Move " << n << " from " << a << " to " << c << std::endl;
    toh(n-1,b,a,c);
}

int main(){
    toh(3,1,2,3);
}
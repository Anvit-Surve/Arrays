#include <iostream>

int main() {
  int arr[15];
  for(int i = 0;i < 15; i++){
    if(i%2==0){
      arr[i] = 2*i;
    }
    else{
      arr[i] = 3*i;
    }
  }
  std::cout << "The required array is ";
  for(int i = 0;i < 15; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}
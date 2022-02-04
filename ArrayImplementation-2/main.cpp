#include <iostream>

int main() {
  int arr[10][10];
  for(int i = 0;i < 10; i++){
    for(int j = 0;j < 10; j++){
      if((i+j)%2==0){
      arr[i][j] = 2*(i+j);
      }
      else{
        arr[i][j] = 3*(i+j);
      }
    }
  }
  std::cout << "The Required Array is " << std::endl;
  for(int i = 0;i < 10; i++){
    for(int j = 0;j < 10; j++){
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }
  
}
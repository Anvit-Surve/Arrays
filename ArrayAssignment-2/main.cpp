#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter size of array\n";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array" << endl;
  for(int i = 0; i < n ;i++){
    cin >> arr[i];
  }
  cout << "Peak Elements are: ";
  for(int i = 0; i < n ;i++){
    if((i == 0) && (arr[i] > arr[i+1])){
      cout << arr[i] << " ";
    }
    else if(i==(n-1) && (arr[i] > arr[i-1])){
      cout << arr[i] << " ";
    }
    else if((arr[i] > arr[i-1])&&(arr[i] > arr[i+1])){
      cout << arr[i] << " ";
    }
  }
  cout << endl;
}
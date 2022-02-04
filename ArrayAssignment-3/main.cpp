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
  int min = arr[0];
  int max = arr[0];
  for(int i = 0; i < n ;i++){
    if(arr[i]< min){
      min = arr[i];
    }
    else if(arr[i]>max){
      max = arr[i];
    }
  }
  cout << "The Maximum number is " << max << "\nThe Minimum number is " << min << endl;
}
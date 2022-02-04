#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter size of array\n";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array" << endl;
  for(int i = 0; i < n ; i++){
    cin >> arr[i];
  }
  int arrn[n];
  int j = 0;
  for(int i = 0; i < n ; i++){
    if(arr[i] >= 0){
      arrn[j++] = arr[i];
    }
  }
  for(int i = 0; i < n ; i++){
    if(arr[i] < 0){
      arrn[j++] = arr[i];
    }
  }
  cout << "The Required Array will be ";
  for(int i = 0; i < n ; i++){
    cout << arrn[i] << " ";
  }
  cout << endl;
}
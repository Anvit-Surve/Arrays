#include <iostream>
using namespace std;

int main() {
  int n;
  int sum = 0;
  cout << "Enter size of array\n";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array" << endl;
  for(int i = 0; i < n ;i++){
    cin >> arr[i];
    sum += arr[i];
  }
  cout << "The Sum of all the elements is " << sum << endl;
}
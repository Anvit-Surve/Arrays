#include <iostream>
#include <math.h>
using namespace std;
class Outscal{
  public:
    void subsets(int *arr, int n){
      int num = 0;
      while(num<pow(2,n)){
        for(int i=0;i<n;++i){
          if((num&(1<<i))!=0){
            cout<<arr[i]<<' ';
          }
          // else{
          //   cout<<"0 ";
          // }
        }
        cout<<endl;
        ++num;
      }
    }
};

int main() {
  int size;
  cin >> size;
  int arr[size];
  int subset[size^2];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  Outscal s;
  s.subsets(arr,size);
}

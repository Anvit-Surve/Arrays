#include <iostream>
#include <vector>
using namespace std;
const int m = 3, n = 4;
bool checkNext(char arr[m][n], string word, int i, int j, int k){
  //check if all letters checked
  if(k == word.size()) return true;
  //check is i/j extends the grid parameters
  if(i < 0 || i >= m || j < 0 || j >= n || arr[i][j] != word[k]) return false;
  //check top, bottom, left and right
  bool status = checkNext(arr, word, i + 1, j, k + 1) || checkNext(arr, word, i, j + 1, k + 1) || checkNext(arr, word, i - 1, j, k + 1) || checkNext(arr, word, i, j - 1, k + 1);
  return status;
}
bool checkExists(char arr[m][n], string word){
  if(word == "") return false;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(checkNext(arr, word, i, j, 0)){
        return true;
      }
    }
  }
  return false;
}
int main() {
  bool exists;
  vector<vector<char>> vectorGrid;
  char element;
  char grid[m][n];
  //insert grid values
  cout << "\nEnter values of grid: " << endl;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cin >> grid[i][j];
    }
  }
  //print grid
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cout << grid[i][j] << ",";
    }
    cout << endl;
  }
  //take word
  string word;
  cout << "\nEnter the word to Search: ";
  cin >> word;
  //convert word to character Array
  char wordArr[word.length()];
  for (int i = 0; i < sizeof(wordArr); i++){
    wordArr[i] = word[i];
  }
  //check if word exists
  if(checkExists(grid, word)){
    cout << "true" << endl;
  }
  else{
    cout << "false" << endl;
  }
}
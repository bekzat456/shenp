#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; i++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i < j) {
        cout << "0 ";
      }
      else if (i<n-j-1){
          cout<<"0 ";
      }
      else {
        cout <<a[i][j]<<" ";
      }
    }
    cout << endl;
  }
  return 0;
}

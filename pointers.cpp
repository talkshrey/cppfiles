#include <iostream>
using namespace std;
int main() {
  int *p;
  int arr[] = {1,2,3,4,5};
  p = arr;
  for(int i=0;i<5;i++) {
    cout << *p << endl;
    p++;
  }
  return 0;
}

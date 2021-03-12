#include <iostream>
using namespace std;
int main() {
  int age;
  cout << "Enter your age: ";
  cin >> age;

  if (age>=18) {
    cout << "Congratulations you can vote!!";
  }  
  else {
    cout << "You are not an adult to vote. Come back when you are 18+";
  }
  return 0;
}

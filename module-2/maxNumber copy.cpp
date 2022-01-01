#include <iostream>

using namespace std;

int main() {
  int number1, number2, number3, max;

  cout << "Enter the first number: ";
  cin >> number1;
  cout << "Enter the second number: ";
  cin >> number2;

  max = number1;

  if (max < number2) {
    max = number2;
  }

  cout << "Enter the third number: ";
  cin >> number3;

  if (max < number3) {
    max = number3;
  }

  cout << "The max number is: " << max;

  return 0;
}
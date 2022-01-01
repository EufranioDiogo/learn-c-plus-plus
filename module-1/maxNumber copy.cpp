#include <iostream>

using namespace std;

int main() {
  int number1, number2, max;

  cout << "Enter the first number: ";
  cin >> number1;
  cout << "\nEnter the second number: ";
  cin >> number2;

  max = number1;

  if (max < number2) {
    max = number2;
  }

  cout << "The max number is: " << max;

  return 0;
}
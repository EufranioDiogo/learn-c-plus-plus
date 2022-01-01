#include <iostream>
using namespace std;

int main() {
  int number;
  int max = -1000000;
  int counter = 0;

  do {
    cout << "Type the number: ";
    cin >> number;
    if (number != -1) {
      counter++;
    }
    if (number > max) {
      max = number;
    }
  } while (number  != -1);

  if (counter) {
    cout << "The max number found at " << counter << " attempts was " << max << endl;
  } else {
    cout << "There's not max number" << endl;
  }

  return 0;
}
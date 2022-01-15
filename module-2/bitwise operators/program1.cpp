#include <iostream>

using namespace std;

int main () {
  int w_sign = -8;
  unsigned wo_sign = 4;

  int var_s;
  unsigned int var_u;

  var_s = w_sign >> 1; // -4
  cout << var_s << endl;

  var_s = w_sign << 2; // -32
  cout << var_s << endl;

  var_u = wo_sign >> 2; // 1
  cout << var_u << endl;

  var_u = wo_sign << 1; // 2
  cout << var_u << endl;

  return 0;
}
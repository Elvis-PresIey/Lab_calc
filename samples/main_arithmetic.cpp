#include "arithmetic.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
  cout << "INPUT: " << endl;
  string expression;
  string note;
  double result;
  cout << "   ";
  cin >> expression;
  try {
    note = arithmetic::arithmetic_notation(expression);
    result = arithmetic::arithmetic_calculation(note);
  }
  catch (...) {
    cout << "Bad Input" << endl;
    return 1;
  }
  cout << endl;
  cout << "Postfix: " << endl;
  cout << " " << note << endl;
  cout << endl;
  cout << "Result: " << endl;
  cout << " " << result << endl;
}

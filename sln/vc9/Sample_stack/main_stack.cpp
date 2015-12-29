#include "stack.h"
#include "stack.cpp"
#include <iostream>
using namespace std;

int main() {
  stack<int> nStack;
  cout << "Stack" << endl;
  nStack.push(10);
  nStack.push(20);
  nStack.push(100);
  nStack.push(200);
  nStack.push(1000);
  nStack.push(1000000);

  cout << "Stack" << endl;
  nStack.print();

  cout << "Pop" << endl;
  nStack.pop();
  nStack.print();

  cout << "Push 42" << endl;
  nStack.push(42);
  nStack.print();
  return 0;
}

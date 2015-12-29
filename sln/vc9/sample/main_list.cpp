#include "list.h"
#include "list.cpp"
#include <iostream>
using namespace std;

int main() {
  list<int> nList;
  nList.insertL(10);
  nList.insertL(20);
  nList.insertL(100);
  nList.insertL(200);
  nList.insertL(1000000);
  
  cout << "List:" << endl;
  nList.print();
 
  cout << "Copied List:" << endl;
  list<int> nList1(nList);
  nList1.print();
  
  cout << "Insert First = 1" << endl;
  nList1.insertF(1);
  nList1.print();
  
  cout << "Insert Last = 42" << endl;
  nList1.insertL(42);
  nList1.print();
 
  cout << "Insert 50 after 100 4" << endl;
  node<int> *a = new node<int>;
  a->val = 50;
  nList1.insertA(100, a);
 
  nList1.print();
  cout << "Delete 100" << endl;
  nList1.del(100);
  
  nList1.print();
  cout << "Erase 100" << endl;
  nList1.del(100);
  nList1.print();

  cout << "Get First" << endl;
  cout << nList1.GetFirst()->val << endl;
  return 0;
}

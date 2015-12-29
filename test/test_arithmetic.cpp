#include <gtest.h>
#include "arithmetic.cpp"
#include <map>

TEST(arithmetic, can_convert_to_postfix) {
  string str = "a+(b-c)*d-f/(g+h)";
  string str1 = "abc-d*+fgh+/-";
  string str2 = arithmetic::arithmetic_notation(str);
  EXPECT_EQ(str1, str2);
}

TEST(arithmetic, can_calculate_postfix) {
  string str1 = "a+b*c";
  double d2 = 31;
  double d[3] = { 1, 5, 6 };
  map <char,double> a;
  a['a']=1;
  a['b']=5;
  a['c']=6;
  string str2 = arithmetic::arithmetic_notation(str1);
  cout << str2 << endl;
  double d1 = arithmetic::calculation(str2, a);
  EXPECT_EQ(d1, d2)
}

TEST(arithmetic, throws_when_input_invalid) {
  string str1 = "p+r+i+k+o+l))))";
  EXPECT_ANY_THROW(arithmetic::arithmetic_notation(str1));
}

TEST(arithmetic, throws_when_empty_writing) {
  string str1 = "";
  EXPECT_ANY_THROW(arithmetic::arithmetic_notation(str1));
}
#include <gtest.h>
#include "arithmetic.cpp"

TEST(arithmetic, can_convert_to_postfix) {
  string str = "a+(b-c)*d-f/(g+h)";
  string str1 = "abc-d*+fgh+/-";
  string str2 = arithmetic::arithmetic_notation(str);
  EXPECT_EQ(str1, str2);
}

TEST(arithmetic, can_calculate_postfix) {
  string str1 = "a+b*c";
  double d[3] = { 1, 5, 5 };
  string str2 = arithmetic::arithmetic_notation(str1);
  double d1 = arithmetic::calculation(str2, d, 2);
  EXPECT_EQ(d1, 26);
}

TEST(arithmetic, can_not_calculate_wrong_arguments) {
  string str1 = "a+b*c";
  double d2 = 7;
  double d[3] = { 1, 2, 3 };
  string str2 = arithmetic::arithmetic_notation(str1);
  ASSERT_ANY_THROW(arithmetic::calculation(str2, d, 1));
}

TEST(arithmetic, throws_when_input_invalid) {
  string str1 = "p+r+i+k+o+l))))";
  EXPECT_ANY_THROW(arithmetic::arithmetic_notation(str1));
}

TEST(arithmetic, throws_when_try_convert_empty_writing) {
  string str1 = "";
  EXPECT_ANY_THROW(arithmetic::arithmetic_notation(str1));
}
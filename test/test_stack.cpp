#include <gtest.h>

#include "stack.h"
#include "stack.cpp"

TEST(Stack, can_create_stack) {
  stack<double> *s;
  ASSERT_NO_THROW(s = new stack<double>());
}

TEST(Stack, can_create_copy) {
  stack<char> s1;
  s1.push(1);
  s1.push(8);
  ASSERT_NO_THROW(stack<char> s2(s1));
}

TEST(Stack, copy_is_equal) {
  stack<char> s1;
  s1.push(3);
  stack<char> s2(s1);
  EXPECT_EQ(true, s1 == s2);
}

TEST(Stack, copy_has_its_own_memory) {
  stack<char> s1;
  s1.push(1);
  s1.push(2);
  stack<char> s2(s1);
  s2.pop();
  s2.push(3);
  EXPECT_EQ(false,s1 == s2);
}

TEST(Stack, IsEmpty) {
  stack<char> s;
  EXPECT_EQ(1, s.isEmpty());
  stack<char> g;
  g.push(1);
  EXPECT_EQ(0, g.isEmpty());
}

TEST(Stack, IsFull) {
  stack<char> s;
  s.push(1);
  EXPECT_EQ(0, s.isFull());
}

TEST(Stack, can_push) {
  stack<char> s;
  ASSERT_NO_THROW(s.push(1));
}

TEST(Stack, throws_when_empty_pop) {
  stack<char> s;
  ASSERT_ANY_THROW(s.pop());
}

TEST(Stack, can_pop) {
  stack<char> s;
  s.push(1);
  ASSERT_NO_THROW(s.pop());
}


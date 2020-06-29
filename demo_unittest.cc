#include <iostream>
#include <gtest/gtest.h>
#include "person.h"

TEST(TestSuiteName1, TestName1) {
  Person person;
  bool ret = person.Sing();
  EXPECT_TRUE(ret);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

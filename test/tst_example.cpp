#include "gtest/gtest.h"

#include "example.h"

TEST(SumTest, testSumFunction1)
{
	int num = example::sum(2, 8);
	EXPECT_EQ(10, num);
}

TEST(SumTest, testSumFunction2)
{
	int num = example::sum(5, 0);
	EXPECT_EQ(5, num);
}

TEST(SumTest, testSumFunction3)
{
	int num = example::sum(-3, 6);
	EXPECT_EQ(3, num);
}

TEST(SumTest, testSumFunction4)
{
	int num = example::sum(-1, -1);
	EXPECT_EQ(-2, num);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

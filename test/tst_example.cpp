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

TEST(MultiplyTest, testMultiplyFunction1)
{
	int num = example::multiply(0, 3);
	EXPECT_EQ(0, num);
}

TEST(MultiplyTest, testMultiplyFunction2)
{
	int num = example::multiply(2, 10);
	EXPECT_EQ(20, num);
}

TEST(MultiplyTest, testMultiplyFunction3)
{
	int num = example::multiply(-4, 4);
	EXPECT_EQ(-16, num);
}

TEST(MultiplyTest, testMultiplyFunction4)
{
	int num = example::multiply(-1, -1);
	EXPECT_EQ(1, num);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

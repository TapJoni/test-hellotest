// unittestHelloTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//
//
//int main()
//{
//    return 0;
//}

#include "gtest/gtest.h"
#include "simplemath.h"

TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, cubic(10));
}


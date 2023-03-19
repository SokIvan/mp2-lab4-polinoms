#include "../include/Polinom.h"
#include "../gtest/gtest.h"

TEST(polinom, can_push)
{
	Polinom A;
	ASSERT_NO_THROW(A.push(2.0,1));
};
TEST(polinom, no_push_equal)
{
	Polinom A;
	A.push(1.0, 0);
	A.push(2.0, 0);
	EXPECT_EQ(A.head->next == nullptr,1);
};
TEST(polinom, sorted_push)
{
	Polinom A;
	A.push(1.0, 2);
	A.push(2.0, 1);
	A.push(3.0, 3);
	EXPECT_EQ(A.head->k == 2.0, 1);
	EXPECT_EQ(A.head->next->k == 1.0, 1);
	EXPECT_EQ(A.head->next->next->k == 3.0, 1);
};
TEST(polinom, Operator_ravno)
{
	Polinom A,B;
	A.push(2.0, 1);
	B = A;
	EXPECT_EQ(B.head->k, 2.0);
};
TEST(polinom, Operator_plus)
{
	Polinom A,B,C;
	A.push(2.0, 1);
	B.push(3.0, 2);
	C = A + B;
	EXPECT_EQ(C.head->k, 2.0);
	EXPECT_EQ(C.head->next->k, 3.0);
};
TEST(polinom, Operator_substract)
{
	Polinom A, B, C;
	A.push(2.0, 1);
	B.push(3.0, 2);
	C = A - B;
	EXPECT_EQ(C.head->k, 2.0);
	EXPECT_EQ(C.head->next->k, -3.0);
};
TEST(polinom, Operator_multiplicate_on_const)
{
	Polinom A, B;
	A.push(2.0, 1);
	B = A *2.324;
	EXPECT_EQ(B.head->k, 2.0*2.324);
};
TEST(polinom, Operator_multiplicate_two_polinoms)
{
	Polinom A,B;
	A.push(-1.0, 0);
	A.push(1.0, 100);
	B = A*A;
	EXPECT_EQ(B.head->k, 1);
	EXPECT_EQ(B.head->next->k, -2.0);
	EXPECT_EQ(B.head->next->next->k, 1.0);
};
TEST(polinom, solve_correct)
{
	Polinom A;
	A.push(1.0, 200);
	A.push(2.0, 110);
	A.push(1.0, 20);
	double x = 1.0,y = 4.0,z = 0.0;
	EXPECT_EQ(A.solve(x, y, z), 25.0);
};
#include "pch.h"
#include "../PrimeFactorProject/PrimeFactor.cpp"

#include <vector>
using namespace std;

class PrimeFactorFixture : public testing::Test
{
public:
    PrimeFactor pf;
    vector<int> expected;
};

TEST_F(PrimeFactorFixture, Of1)
{
    expected = {};
    EXPECT_EQ(expected, pf.of(1));
}

TEST_F(PrimeFactorFixture, Of2)
{
    expected = {2};
    EXPECT_EQ(expected, pf.of(2));
}
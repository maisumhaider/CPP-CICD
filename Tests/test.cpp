#include <gtest/gtest.h>
int retun1(){
    return 1;
}
TEST(MathTest, TwoPlusTwoEqualsFour) {
    EXPECT_EQ(4, 2 + 2);
}
TEST(Sanity,checkSanity){
    EXPECT_EQ(1,retun1());
}
#include <gtest/gtest.h>
#include <string>
#include <cmath>
#include <vector>

using std::string;

string DecimalToRomanSimple(int decimalInput)
{
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string thousands[] = {"", "M", "MM", "MMM"};

    string thousandth = thousands[decimalInput/1000];
    string hundredth = hundreds[(decimalInput%1000)/100];
    string tenth =  tens[(decimalInput%100)/10];
    string first = ones[decimalInput%10];

    return thousandth + hundredth + tenth + first;
}

TEST(RomanNumbers, RomanNumbers_III) {
    EXPECT_EQ("III", DecimalToRomanSimple(3));
}

TEST(RomanNumbers, RomanNumbers_XXXIX) {
    EXPECT_EQ("XXXIX", DecimalToRomanSimple(39));
}

TEST(RomanNumbers, RomanNumbers_DCCLIII) {
    EXPECT_EQ("DCCLIII", DecimalToRomanSimple(753));
}

TEST(RomanNumbers, RomanNumbers_MMDCCLI) {
    EXPECT_EQ("MMDCCLI", DecimalToRomanSimple(2751));
}

TEST(RomanNumbers, RomanNumbers_MMMCMXCIX) {
    EXPECT_EQ("MMMCMXCIX", DecimalToRomanSimple(3999));
}


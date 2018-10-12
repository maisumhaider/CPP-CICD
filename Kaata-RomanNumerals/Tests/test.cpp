#include <gtest/gtest.h>
#include "DecimalToRoman.h"

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


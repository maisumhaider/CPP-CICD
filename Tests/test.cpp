#include <gtest/gtest.h>
#include <string>
#include <cmath>
#include <vector>
using std::string;
using std::vector;
string LookupTableMain (int TableInput){
    if (TableInput == 1)
        return "I";
    else if (TableInput == 5)
        return "V";
    else if (TableInput == 10)
        return "X";
    else if (TableInput == 50)
        return "L";
    else if (TableInput == 100)
        return "C";
    else if (TableInput == 500)
        return "D";
    else if (TableInput == 1000)
        return "M";
    else
        return "";
}
string get123(int decimalInput) {
    string input = "";
    for(int i =0; i < decimalInput; i++){
        input +=LookupTableMain(1);
        }
    return input;
}

string DecimalToRoman (int decimalInput){
    int num_digits= ceil(log(decimalInput)/log(10));
    string stringInput = "";
    vector<int> digits = vector<int>(num_digits);
    int input = decimalInput;
    for(int i=num_digits-1;i>=0;i--){
        digits[i] = input % 10;
        input = input/10;
    }
    if (decimalInput < 0) {
        return stringInput;
    }
    else if (decimalInput <4){
        return get123(decimalInput);
    }
    else if(decimalInput == 4){
        return DecimalToRoman(1) + DecimalToRoman(5);;
    }
    else if(decimalInput == 5){
        return LookupTableMain(decimalInput);
    }
    else if(decimalInput > 5 && decimalInput < 9){
        return  DecimalToRoman(5) + DecimalToRoman(decimalInput-5);
    }
    else if(decimalInput ==9){
        return DecimalToRoman(1) + DecimalToRoman(10);
    }
    else if(decimalInput == 10){
        return LookupTableMain(10);
    }
    else if(decimalInput > 10 && decimalInput < 14){
        return DecimalToRoman(10) + DecimalToRoman(4);
    }

    else return "";
}

TEST(RomanNumbers, RomanNumbers_I) {
    EXPECT_EQ("I", DecimalToRoman(1));
}

TEST(RomanNumbers, RomanNumbers_III) {
    EXPECT_EQ("III", DecimalToRoman(3));
}
TEST(RomanNumbers, RomanNumbers_IV) {
    EXPECT_EQ("IV", DecimalToRoman(4));
}
TEST(RomanNumbers, RomanNumbers_V) {
    EXPECT_EQ("V", DecimalToRoman(5));
}

TEST(RomanNumbers, RomanNumbers_VI) {
    EXPECT_EQ("VI", DecimalToRoman(6));
}
TEST(RomanNumbers, RomanNumbers_XI) {
    EXPECT_EQ("XI", DecimalToRoman(11));
}

TEST(RomanNumbers, RomanNumbers_DCCLIII) {
    EXPECT_EQ("DCCLIII", DecimalToRoman(753));
}
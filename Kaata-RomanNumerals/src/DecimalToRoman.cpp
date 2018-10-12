//
// Created by USER on 08-Oct-18.
//
#include <string>
#include "DecimalToRoman.h"

using std::string;

static const string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
static const string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
static const string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
static const string thousands[] = {"", "M", "MM", "MMM"};

string DecimalToRomanSimple(int decimalInput)
{
    string thousandth = thousands[decimalInput/1000];
    string hundredth = hundreds[(decimalInput%1000)/100];
    string tenth =  tens[(decimalInput%100)/10];
    string first = ones[decimalInput%10];

    return thousandth + hundredth + tenth + first;
}

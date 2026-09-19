#include <iostream>
#include <string>
using namespace std;
string checkShippingDiscount(double D, double V) {
    if (D < 0.00 || D >= 50.00 || V <= 0.00 || V > 5000.00) { // doi > thanh >=, < thanh <=
        return "Invalid";
    }

    if (D >= 0.00 && D < 15.00 && V >= 300.00 && V <= 5000.00) { // doi <= thanh <
        return "Giam 100% phi giao hang";
    }

    if (D > 15.00 && D <= 30.00 && V >= 300.00 && V <= 5000.00) { // doi > thanh >=
        return "Giam 50% phi giao hang";
    }

    if ((D > 30.00 && D <= 50.00) || (V >= 0.00 && V <= 300.00)) {
        return "Khong du dieu kien";
    }

    return "Khong xac dinh";
}
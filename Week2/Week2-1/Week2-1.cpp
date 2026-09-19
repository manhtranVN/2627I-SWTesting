#include<iostream>
#include<math.h>
using namespace std;
string checkElevator(int N, double m) {
    if (N < 0 || N >= 30 || m <= 0.00 || m > 2000.00) //nham tu dau <= thanh <, >= thanh >
        return "Invalid";

    if ((N >= 0 && N <= 20) && (m >= 0.00 && m < 850.00)) //nham tu dau <= thanh <
        return "An toan";

    if ((N >= 21 && N <= 30) && (m > 850.00 && m <= 2000.00)) //nham tu || thanh &&
        return "Khong an toan";

    return "Invalid";
}
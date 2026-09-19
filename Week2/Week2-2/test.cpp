#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include"Week2-2.cpp"
using namespace std;
int main() {
	freopen("testCases.inp","r",stdin);
	int tests = 0; double D, V; string expectOut;
	while (cin >> D >> V) {
		tests++;
		getline(cin, expectOut);
		expectOut = expectOut.substr(1, expectOut.size() - 1);
		cout << "Test #" << tests << ": ";
		cout << "Input: D = " << D << ", V = " << V << ", Expected Output: " << expectOut << ", Output: " << checkShippingDiscount(D, V);
		//cout << N << " " << m << " " << expectOut << endl;
		if(checkShippingDiscount(D, V) == expectOut) {
			cout << ", Verdict: success" << endl;
		} else {
			cout << ", Verdict: fail" << endl;
		}
	}
}
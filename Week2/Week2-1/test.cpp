#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include"Week2-1.cpp"
using namespace std;
int main() {
	freopen("testCases.inp","r",stdin);
	int tests = 0, N; double m; string expectOut;
	while (cin >> N >> m) {
		tests++;
		getline(cin, expectOut);
		expectOut = expectOut.substr(1, expectOut.size() - 1);
		cout << "Test #" << tests << ": ";
		cout << "Input: N = " << N << ", m = " << m << ", Expected Output: " << expectOut << ", Output: " << checkElevator(N, m);
		//cout << N << " " << m << " " << expectOut << endl;
		if(checkElevator(N, m) == expectOut) {
			cout << ", Verdict: success" << endl;
		} else {
			cout << ", Verdict: fail" << endl;
		}
	}
}
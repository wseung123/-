#include<iostream>

using namespace std;

int main(){
	for (int i = 0; i < 3; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int sum = 0;
		sum = a + b + c + d;
		if (sum == 3)
			cout << "A" << endl;
		if (sum == 2)
			cout << "B" << endl;
		if (sum == 1)
			cout << "C" << endl;
		if (sum == 0)
			cout << "D" << endl;
		if (sum == 4)
			cout << "E" << endl;
	}
}
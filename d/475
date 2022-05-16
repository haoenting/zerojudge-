#include <iostream>
using namespace std;
int run(int a, int b) {
	if (b == 1)
		return a;
	else if (b % 2 == 1) {
		int num = a;
		b--;
		return run(a, b) * num;
	}
	else 
		return run(a * a, b / 2);
}
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			int count = 0;
			while (cin >> a >> b) {
				count++;
			}
			cout << "All Over. Exceeded " << count << " lines!";
		}
		else {
			if (a == -1) {
				if (b % 2 == 0)
					cout << '1' << endl;
				else cout << '-1' << endl;
			}
			else if (a == 1)
				cout << '1' << endl;
			else if (b == 1)
				cout << a << endl;
			else {
				cout << run(a,b) << endl;
			}
		}
	}
	return 0;
}

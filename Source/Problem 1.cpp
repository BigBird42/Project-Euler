#include <iostream>
using namespace std;
int main() {
	int result = 0;
	for (int i = 1; i < 1000; i++) {
		if (i % 3 == 0) {
			result += i;
		}
		else if (i % 5 == 0) {
			result += i;
		}
	}
	cout << result << endl;
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int last = 0, recent = 1, new_num = 1, result = 0;

	for (; new_num < 4000000;) {
		new_num = last + recent;
		last = recent;
		recent = new_num;
		if (new_num % 2 == 0) {
			result += new_num;
		}
	}

	cout << result << endl;
	return 0;
}
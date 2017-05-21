#include <iostream>
using namespace std;
int main() {
	int x = 100;
	int sum_squares = 0, square_sum = 0;

	sum_squares = (x*(x + 1)*(2*x + 1)) / 6;
	for (int i = 1; i <= x; i++) {
		square_sum += i;
	}
	square_sum = square_sum*square_sum;
	cout << square_sum - sum_squares << endl;

	return 0;
}
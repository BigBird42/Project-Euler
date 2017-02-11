#include <iostream>
#include <iomanip>
#include <math.h>
#include <ctime>
using namespace std;
#define power 1000
#define num_length 15052
short int number[num_length];

int main() {
	const clock_t begin_time = clock();
	number[0] = 1;
	int j = 1;
	for (int i = 0; i < power; i++) {
		int carry = 0;
		int temp = 0;
		for (int k = 0; k < j; k++) {
			temp = number[k] * 2;
			temp += carry;
			carry = 0;
			number[k] = temp % 10;
			if (temp >= 10) {
				carry++;
			}
		}
		if (i % 3 == 0) {
			j++;
		}
	}
	
	unsigned int total = 0;
	for (int i = num_length; i >= 0; i--) {
		total += number[i];

	}
	cout << total;
	
	cout << endl << float(clock() - begin_time) / CLOCKS_PER_SEC << endl;
	return 0;
}
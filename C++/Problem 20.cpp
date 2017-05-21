#include <iostream>
#include <iomanip>
using namespace std;
#define fact 99
#define answer_length 165
short int number[answer_length];
short int temp_array_1[answer_length];
short int temp_array_2[answer_length + 1];
short int temp_array_3[answer_length + 2];

void multiply_array(int);

int main() {
	unsigned int total = 0;
	number[0] = 1;
	for (int i = 2; i <= fact; i++) {
		multiply_array(i);
	}

	for (int i = answer_length; i >= 0; i--) {
		total += number[i];
	}

	cout << total << endl;

	return 0;
}

void multiply_array(int mult_by) {
	int temp2 = 0;
	int carry = 0;
	int mult_by_0s = mult_by % 10;
	int mult_by_10s = mult_by / 10;
	int mult_by_100s = mult_by / 100;
	/*multpiply first column*/
	for (int i = 0; i < answer_length; i++) {
		temp2 = number[i] * mult_by_0s;
		temp2 += carry;
		carry = 0;
		temp_array_1[i] = temp2 % 10;
		carry = temp2 / 10;
	}
	carry = 0;
	/*multiply second column*/
	if (mult_by >= 10) {
		for (int i = 0; i < answer_length; i++) {
			temp2 = number[i] * mult_by_10s;
			temp2 += carry;
			carry = 0;
			temp_array_2[i+1] = temp2 % 10;
			carry = temp2 / 10;
		}
		carry = 0;
	}
	/*multiple third column*/ //THE BUG WITH N!>=100 IS PROBABLY HERE
	if (mult_by >= 100) {
		for (int i = 0; i < answer_length; i++) {
			temp2 = number[i] * mult_by_100s;
			temp2 += carry;
			carry = 0;
			temp_array_3[i+2] = temp2 % 10;
			carry = temp2 / 10;
		}
		carry = 0;
	}

	/*add results together*/
	for (int i = 0; i < answer_length; i++) {
		temp2 = temp_array_1[i] + temp_array_2[i] + temp_array_3[i];
		temp2 += carry;
		carry = 0;
		number[i] = temp2 % 10;
		carry = temp2 / 10;
	}
}

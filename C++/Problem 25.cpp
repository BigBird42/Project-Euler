#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
#define fibonacci_length 1000

void fibonacci_calc_next_term();

int fibonacci_term_n = 3;
vector<int> fibonacci_n;
vector<int> fibonacci_n1;
vector<int> fibonacci_n2;

int main() {
	const clock_t begin_time = clock();

	fibonacci_n.push_back(2);
	fibonacci_n1.push_back(1);
	fibonacci_n2.push_back(1);
	
	while ( fibonacci_n.size() < fibonacci_length) {
		fibonacci_calc_next_term();
	}

	cout << fibonacci_term_n;//zero index
	cout << endl << float(clock() - begin_time) / CLOCKS_PER_SEC << endl;
	return 0;
}

/*appends the corresponding term to the vector*/
void fibonacci_calc_next_term() {
	/*transfer n1 to n2*/
	fibonacci_n2.clear();
	for (int i = 0; i < fibonacci_n1.size(); i++) {
		fibonacci_n2.push_back(fibonacci_n1[i]);
	}
	/*transfer n to n1*/
	fibonacci_n1.clear();
	for (int i = 0; i < fibonacci_n.size(); i++) {
		fibonacci_n1.push_back(fibonacci_n[i]);
	}
	/*add together n2 and n1 and put value into n*/
	fibonacci_n.clear();
	int carry = 0;
	int temp = 0;
	for (int i = 0; i < fibonacci_n1.size(); i++){
		if (i < fibonacci_n2.size()) {
			temp = fibonacci_n1[i] + fibonacci_n2[i];
		}
		else{
			temp = fibonacci_n1[i];
		}
		temp += carry;
		carry = 0;
		fibonacci_n.push_back(temp % 10);
		carry = temp / 10;
		temp = 0;
	}
	if (carry != 0) {
		fibonacci_n.push_back(carry);
		carry = 0;
	}
	fibonacci_term_n++;
}
#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;

bool check_if_multiple(int, int);
bool check_if_on_list(double);

double temp = 0;
unsigned int counter = 0;
vector<double> distinct_terms;

int main() {
	const clock_t begin_time = clock();

	for (int a = 2; a <= 100; a++) {
		for (int b = 2; b <= 100; b++) {
			temp = pow(a, b);
			if (check_if_on_list(temp)) {
				continue;
			}

			else {
				distinct_terms.push_back(pow(a, b));
				//cout << counter + 1 << " - " << distinct_terms[counter] << endl;
				//counter++;
			}
		}
	}
	cout << endl << distinct_terms.size() << endl;
	cout << float(clock() - begin_time) / CLOCKS_PER_SEC << " seconds" << endl;
	return 0;
}
/*checks if the base is a multiple of the power*/
bool check_if_multiple(int a, int b) {
	if (a % b == 0 && a != b) {
		return true;
	}
	else {
		return false;
	}
}

bool check_if_on_list(double value){
	for (int i = 0; i < distinct_terms.size(); i++) {
		if (value == distinct_terms[i]) {
			return true;
		}
		
	}
	return false;
}

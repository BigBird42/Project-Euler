#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	double temp;
	long double result = 0;
	ifstream DataIn;
	DataIn.open("Problem 13 Data.txt");

	while (!DataIn.eof()) {//c++ concatenates down to the first 6 digits time 10^x // need a way around this (otherwise good)
		DataIn >> temp;
		temp = (temp / 10000000000);
		temp = (temp / 10000000000);
		result += temp;
	}

	cout << "remove the demical point and the e+x stuff" << endl;
	cout << setprecision(11) << result << endl;

	return 0;
}

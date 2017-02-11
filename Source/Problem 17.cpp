#include <iostream>
using namespace std;

int main(){
	long int total = 0;

	//single digits
	int S1 = 3+3+5+4+4+3+5+5+4;
	total += S1;

	//double digits
	int S10 = 3+6+6+8+8+7+7+9+8+8;
	total += S10;
	int S20 = 6+9*6+S1;
	total += S20;
	int S30 = 6+9*6+S1;
	total += S30;
	int S40 = 5+9*5+S1;
	total += S40;
	int S50 = 86;
	total += S50;
	int S60 = 86;
	total += S60;
	int S70 = 106;
	total += S70;
	int S80 = 96;
	total += S80;
	int S90 = 96;
	total += S90;
	int double_digits = total;

	//triple digits
	int S100 = 10 + 99*13 + double_digits;
	total += S100;
	int S200 = 10 + 99*13 + double_digits;
	total += S200;
	int S300 = 12 + 99*15 + double_digits;
	total += S300;
	int S400 = 11 + 99*14 + double_digits;
	total += S400;
	int S500 = 11 + 99*14 + double_digits;
	total += S500;
	int S600 = 10 + 99*13 + double_digits;
	total += S600;
	int S700 = 12 + 99*15 + double_digits;
	total += S700;
	int S800 = 12 + 99*15 + double_digits;
	total += S800;
	int S900 = 11 + 99*14 + double_digits;
	total += S900;

	//one thousand
	total += 11;

	cout << total << endl;

	return 0;
}

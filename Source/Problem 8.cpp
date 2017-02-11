#include <iostream>
#include <fstream>
#include <vector>
#define adjacent_digits 13
using namespace std;

vector<int> data_digits;

int main(){
	ifstream data;
	data.open("Problem 8 Data.txt");

	char temp;
	while (!data.eof()){
		data >> temp;
		data_digits.push_back(temp - 48);
	}

	long int temp2, largest_product = 0;
	for (int i = 0; i < (data_digits.size() - adjacent_digits + 1); i++){
		temp2 = 1;
		for (int j = 0; j < adjacent_digits; j++){
			temp2 *= data_digits[i + j];
		}
		if (temp2 > largest_product){
			largest_product = temp2;
		}
	}

	cout << "The largest product is: " << largest_product << endl;

	return 0;
}

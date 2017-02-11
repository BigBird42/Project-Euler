#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
using namespace std;

void calc_triangle_nums();
void check_triangle_num();

vector<char> word;
vector<unsigned int> triangle_numbers;
unsigned int total;
bool read = false;

int main() {
	const clock_t begin_time = clock();

	calc_triangle_nums();

	std::cout << "Done calculating triangle numbers" << endl;

	ifstream data;
	data.open("Problem 42 Data.txt");

	char temp;
	while (!data.eof()) {
		data >> temp;
		if (temp == 44) {
			continue;
		}
		if (temp == 34) {
			read = !read;
		}
		if (read && temp != 34) {
			word.push_back(temp);
		}
		else if (!read) {
			check_triangle_num();
			word.clear();
		}
	}

	std::cout << total << endl;
	std::cout << float(clock() - begin_time) / CLOCKS_PER_SEC << endl;
	return 0;
}

void calc_triangle_nums() {
	int temp;
	for (int i = 1; i <= 1000; i++) {
		temp = 0;
		if (i % 2 == 1) {
			temp += i + 1;
			temp /= 2;
			temp *= i;
		}
		else {
			temp = i / 2;
			temp *= (i + 1);
		}
		triangle_numbers.push_back(temp);
	}
}

void check_triangle_num() {
	int temp = 0;
	for (int i = 0; i < word.size(); i++) {
		temp += word[i] - 64;
	}
	for (int i = 0; i < triangle_numbers.size(); i++) {
		if (temp == triangle_numbers[i]) {
			total++;
			continue;
		}
	}
}

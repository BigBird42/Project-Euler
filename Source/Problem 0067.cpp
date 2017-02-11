#include <iostream>
#include <signal.h>
#include <fstream>
#include <ctime>
#define num_row 100
using namespace std;

int triangle[num_row][num_row];//triangle[row][column]

int main() {
	int result = 0;

	ifstream DataIn;
	DataIn.open("Problem 67 Data.txt");

	for (int i = 0, k = 1; i < num_row; i++) {//initialized array with values from txt file
		for (int j = 0; j < k; j++) {
			DataIn >> triangle[i][j];
		}

		k++;
	}

	const clock_t begin_time = clock();

	for (int i = num_row - 2; i >= 0; i--) {
		for (int j = i; j >= 0; j--) {
			if (triangle[i + 1][j + 1] > triangle[i + 1][j]) {
				triangle[i][j] += triangle[i + 1][j + 1];
			}
			else {
				triangle[i][j] += triangle[i + 1][j];
			}
		}
	}

	cout << triangle[0][0] << endl;
	float temp = float(clock() - begin_time) / CLOCKS_PER_SEC;

	cout << endl << temp*1000 << "ms" << endl;

	return 0;
}
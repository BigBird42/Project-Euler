#include <iostream>
#include <fstream>
#define num_row 15
using namespace std;

int check_triangle(int row, int col);

int triangle[num_row][num_row];//triangle[row][column]

int main() {
	int result = 0;

	ifstream DataIn;
	DataIn.open("C:\\Users\\BigBird\\Desktop\\school stuff\\C and C++\\Project Euler\\Problem 18\\Data.txt");

	for (int i = 0, k = 1; i < num_row; i++) {//initialized array with values from txt file
		for (int j = 0; j < k; j++) {
			DataIn >> triangle[i][j];
		}

		k++;
	}


	result = check_triangle(0, 0);//calls up a recursive function

	cout << result << endl;

	return 0;
}

//recursively calculates small triangles below the uppermost values
//i.e. calculates triangles starting at [1][0] and [1][1] when passed value [0][0]
int check_triangle(int row, int col) {/
	if (row == num_row - 1) {
		return triangle[row][col];
	}
	else if (check_triangle(row + 1, col) > check_triangle(row + 1, col + 1)) {
		return check_triangle(row + 1, col) + triangle[row][col];
	}
	else {
		return check_triangle(row + 1, col + 1) + triangle[row][col];
	}

}
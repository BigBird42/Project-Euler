#define grid_hor 20
#define grid_vert 20
#define num_of_products 4

#include <iostream>
#include <fstream>
using namespace std;

int data_array[grid_vert][grid_hor];
int values[num_of_products + 1];

int main() {
	ifstream DataIn;
	DataIn.open("Problem 11 Data.txt");

	for (int i = 0; i < grid_vert; i++) {
		for (int j = 0; j < grid_hor; j++) {
			DataIn >> data_array[i][j];
		}
	}
	DataIn.close();

	//check all horizontal values
	for (int j = 0; j < grid_vert; j++) {//increment row we are checking
		for (int i = 0, temp = 0; i <= (grid_hor - num_of_products); i++) {//increment column values

			if (data_array[j][i] == 0 || data_array[j][i + 1] == 0 || data_array[j][i + 2] == 0 || data_array[j][i + 3] == 0) {

			}//check if one of the values is 0

			else {
				for (int v = 0; v < num_of_products; v++) {
					temp += data_array[j][i+v];
				}// temp equals the values to be checked added together

				 //if the sum of the is greater than the previous sum then the numbers multiplied is greater than the previous numbers multiplied
				if (temp > values[num_of_products]) {
					for (int v = 0; v < num_of_products; v++) {
						values[v] = data_array[j][i + v];
					}
					values[num_of_products] = temp;
				}
				temp = 0;
			}
		}
	}

	//check all vertical values
	for (int i = 0; i < grid_hor; i++) {//increment column we are checking
		for (int j = 0, temp = 0; j <= (grid_vert - num_of_products); j++) {//increment row values

			if (data_array[j][i] == 0 || data_array[j+1][i] == 0 || data_array[j+2][i] == 0 || data_array[j+3][i] == 0) {

			}//check if one of the values is 0

			else {
				for (int v = 0; v < num_of_products; v++) {
					temp += data_array[j + v][i];
				}

				if (temp > values[num_of_products]){
					for (int v = 0; v < num_of_products; v++) {
						values[v] = data_array[j + v][i];
					}
					values[num_of_products] = temp;
				}

				temp = 0;
			}

		}
	}

	//needs verification
	//check diagonal values top left to bottom right
	for (int j = 0; j < (grid_vert - num_of_products); j++) {//increment row our first value is on
		for (int i = 0, temp = 0; i < (grid_hor - num_of_products); i++) {//increment column our first value is on

			if (data_array[j][i] == 0 || data_array[j + 1][i + 1] == 0 || data_array[j + 2][i + 2] == 0 || data_array[j + 3][i + 3] == 0) {

			}

			else {
				for (int v = 0; v < num_of_products; v++) {
					temp += data_array[j + v][i+v];
				}

				if (temp > values[num_of_products]) {
					for (int v = 0; v < num_of_products; v++) {
						values[v] = data_array[j + v][i+v];
					}
					values[num_of_products] = temp;
				}
				temp = 0;
			}
		}
	}

	//check diagonal values top right to bottom left
	for (int j = 0; j < (grid_vert - num_of_products); j++) {//increment row our first value
		for (int i = grid_hor - 1, temp = 0; i >= num_of_products - 1; i--) {//increment column our first value is on from right to left
			if (data_array[j][i] == 0 || data_array[j + 1][i - 1] == 0 || data_array[j + 2][i - 2] == 0 || data_array[j + 3][i - 3] == 0) {

			}

			else {
				for (int v = 0; v < num_of_products; v++) {
					temp += data_array[j + v][i - v];
				}

				if (temp > values[num_of_products]) {
					for (int v = 0; v < num_of_products; v++) {
						values[v] = data_array[j + v][i - v];
					}
					values[num_of_products] = temp;
				}
				temp = 0;
			}
		}
	}

	cout << values[0] << " " << values[1] << " " << values[2] << " " << values[3] << " " << values[4] << " " << endl;

	int result = 1;

	for (int i = 0; i < num_of_products; i++) {
		result *= values[i];
	}

	cout << result << endl;

	return 0;
}

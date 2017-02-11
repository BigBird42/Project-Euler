#include <iostream>
#include <vector>
#include <cmath>
#define size_of_grid 20
using namespace std;

void calculate_next_vertex(int,int);

unsigned long grid[size_of_grid+1][size_of_grid+1];

int main(){
	clock_t begin_time = clock();

	for (int i = 0; i < size_of_grid; i++){
		grid[size_of_grid][i] = 1;
		grid[i][size_of_grid] = 1;
	}

	for (int i = size_of_grid - 1; i >= 0; i--){
		for(int j = size_of_grid - 1; j >= 0; j--){
			calculate_next_vertex(i,j);
		}
	}

	float end_time = float(clock() - begin_time)/CLOCKS_PER_SEC;

	cout << "grid size " << size_of_grid << " = " << grid[0][0] << endl;
	cout << "Time Taken: " << end_time << endl;

	return 0;
}

void calculate_next_vertex(int col, int row){
	grid[col][row] = grid[col+1][row] + grid[col][row+1];
}

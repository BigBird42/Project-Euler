#include <iostream>
#include <ctime>
using namespace std;
#define spiral_size 1001

int main() {
	const clock_t begin_time = clock();

	unsigned int total = 1;//middle value
	unsigned int add = 8;
	unsigned int up_right = 1;
	unsigned int up_left = 1;
	unsigned int down_right = 1;
	unsigned int down_left = 1;

	/*up to the right*/
	for (int i = 0; i < spiral_size/2; i++) {
		up_right += add;
		add += 8;
		total += up_right;
	}

	/*up to the left*/
	add = 6;
	for (int i = 0; i < spiral_size / 2; i++) {
		up_left += add;
		add += 8;
		total += up_left;
	}

	/*down to the left*/
	add = 4;
	for (int i = 0; i < spiral_size / 2; i++) {
		down_left += add;
		add += 8;
		total += down_left;
	}

	/*down to the right*/
	add = 2;
	for (int i = 0; i < spiral_size / 2; i++) {
		down_right += add;
		add += 8;
		total += down_right;
	}

	cout << total;
	cout << endl << float(clock() - begin_time) / CLOCKS_PER_SEC << endl;
	return 0;
}
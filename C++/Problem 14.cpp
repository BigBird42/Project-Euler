#include <iostream>
#include <ctime>
using namespace std;

unsigned int iteration_count = 1;
unsigned int max_length = 1;
unsigned int max_length_number = 1;

int calc_collatz(unsigned int);

int main() {
	const clock_t begin_time = clock();

	for (int i = 1; i < 1000000; i += 2) {
		calc_collatz(i);
		if (iteration_count-1 > max_length) {
			max_length = iteration_count;
			max_length_number = i;
		}
		iteration_count = 0;
	}

	cout << "The lengest chain number is: " << max_length_number << endl;
	cout << float(clock() - begin_time) / CLOCKS_PER_SEC << " seconds" << endl;
	return 0;
}

/*Hey future me, if the agument to calc_collatz is signed arg will overflow causing the answer to the problem to be incorrect*/
/*Why does it come to an answer, there is no check for negatives or way to get from negative to positive*/
/*shouldn't get stuck in an infinite loop; unless it like overflows again back into the positive numbers*/

int calc_collatz(unsigned int arg) {
	iteration_count++;
	if (arg == 1) {
		return 0;
	}
	else if (!(arg & 1)) {
		calc_collatz(arg >> 1);
	}
	else if (arg & 1) {
		calc_collatz((3 * arg) + 1);
	}
}

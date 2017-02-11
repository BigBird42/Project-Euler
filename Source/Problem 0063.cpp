#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


int main(){
	double temp;
	int count = 0;

	clock_t start_time = clock();

	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 10; j++){
			temp = pow(j,i);
			if ( (temp >= pow(10,i-1)) && (temp < pow(10,i)) ){
				count += 1;
				cout << count << ": " << j << '^' << i << '=' << temp << endl;
			}
		}
	}

	float end_time = float(clock() - start_time)/CLOCKS_PER_SEC;

	cout << "time is: " << end_time << endl;

	return 0;
}

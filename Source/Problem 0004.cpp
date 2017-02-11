#include <iostream>
using namespace std;

bool check_palin(int value);

int main() {
	int palin[6] = { 0 }, result;
	int temp = 0;
	
	for (int i = 1; i <= 9; i++) {
		palin[0] = i;
		palin[5] = i;
		for (int j = 0; j <= 9; j++) {
			palin[1] = j;
			palin[4] = j;
			for (int k = 0; k <= 9; k++) {
				palin[2] = k;
				palin[3] = k;
				temp = (palin[0] * 100000) + (palin[1] * 10000) + (palin[2] * 1000) + (palin[3] * 100) + (palin[4] * 10) + (palin[5]);
				if (check_palin(temp)) {
					result = temp;
				}
			}

		}

	}
	
	cout << result << endl;
	

	
	return 0;
}



bool check_palin(int value){

	for (int x = 100; x <= 999; x++) {
		if (  ((value/x) >= 100) && ((value/x) <= 999) ){
			if ((value%x) == 0) {
				return true;
			}
		}
	}
	return false;

}
#include <iostream>
#define num_divisors_wanted 501
using namespace std;
int main(){
	int num_divisors = 0;
	int i = 0;
	int k = 1;
	int temp;
	while(num_divisors < num_divisors_wanted){
		i += k;
		k++;
		temp = i;
		num_divisors = 0;

		for(int j = 1; j <= temp; j++){
			if (i % j == 0){
				num_divisors += 2;
				temp = (i-1) / (j);
			}
		}
	}

	cout << "The answer is: " << i << endl;

	return 0;
}

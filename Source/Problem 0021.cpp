#include <iostream>
#include <vector>
#define max_num 10000
using namespace std;

vector<unsigned int> divisors_sum;

int main() {
	//0 has 0 divisors
	divisors_sum.push_back(0);

	//generate divisor sums
	for (int i = 1; i < max_num; i++){
		divisors_sum.push_back(0);//add entry for number i
		for(int j = 1; j <= i/2; j++){
			if (i % j == 0){
				divisors_sum[divisors_sum.size()-1] += j;
			}
		}
	}

	unsigned long int result = 0;
	//add together pairs
	for (int i = 1; i < divisors_sum.size(); i++){
		if(divisors_sum[i] < max_num){
			if (i == divisors_sum[divisors_sum[i]] && (i != divisors_sum[i]) ){
				result += i;
			}
		}
	}

	cout << "The answer is: " << result << endl;

	return 0;
}

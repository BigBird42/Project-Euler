#include <iostream>
#include <vector>
using namespace std;
#define factor 600851475143

unsigned long long largest_factor = 0;
unsigned long long temp = 1;
bool is_prime = true;
vector<unsigned long long> primes;
vector<unsigned long long> factors;

int main(){

	unsigned long long composite = factor;

	while(temp <= composite){
		temp++;
		for (unsigned long long i = 0; i < primes.size(); i++){
			if (temp % primes[i] == 0){
				is_prime = false;
			}
		}
		if (is_prime){
			primes.push_back(temp);
			if(factor % temp == 0){
				factors.push_back(temp);
				composite /= temp;
			}
		}
		is_prime = true;
	}

	for (int i = 0; i < factors.size(); i++){
		if (factors[i] > largest_factor){
			largest_factor = factors[i];
		}
	}

	cout <<  "The largest factor is: " << largest_factor << endl;

	return 0;
}

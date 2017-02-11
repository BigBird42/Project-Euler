#include <iostream>
#include <math.h>
#define value_range 20000000
#define prime_wanted 3000000
using namespace std;

int prime_array[prime_wanted];
bool value_prime[value_range];

int main() {
	long long int result = 0;

	for (int i = 0; i < value_range; i++) {//initialize bool array to all true
		value_prime[i] = true;
	}

	for (int i = 2; i < (pow(value_range, .5) + 1); ) {//calculate primes

		for (int k = i + i; k < value_range;) {//smallest primes less than square root of the max value range
			value_prime[k] = false;
			k = k + i;
		}
		i++;
		while (!value_prime[i]) {//skip values removed by the sieve algorithm
			i++;
		}

	}

	for (int j = 2, k = 0; j < value_range; j++) {
		if (value_prime[j] && k < (prime_wanted)) {
			prime_array[k] = j;
			k++;
		}
	}

	for (int i = 0; i < (prime_wanted); i++) {
		if (prime_array[i] < 2000000) {
			result += prime_array[i];
		}
	}

	//cout << prime_array[prime_wanted - 1] << endl;
	cout << result << endl;

	return 0;
}
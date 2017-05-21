#include <iostream>
#include <vector>
#include <ctime>
#include <csignal>
#define prime_wanted 10001
using namespace std;

clock_t begin_time;
unsigned long long big_prime = 1;
bool is_prime = true;
vector<unsigned long long> primes;

void user_signal(int signum){
	cout << "current prime is: #" << primes.size() << " - " << primes[primes.size()-1] << endl;
	cout << "current time is: " << float(clock() - begin_time)/CLOCKS_PER_SEC << endl;
	signal(SIGUSR1, user_signal);
}

int main(){
	signal(SIGUSR1, user_signal);

	begin_time = clock();

	while(primes.size() < prime_wanted){
		big_prime++;
		for (unsigned long long i = 0; i < primes.size(); i++){
			if (big_prime % primes[i] == 0){
				is_prime = false;
			}
		}
		if (is_prime){
			primes.push_back(big_prime);
		}
		is_prime = true;
	}

	cout << "The " << prime_wanted << " prime is: " << primes[prime_wanted-1] << endl;

	return 0;
}

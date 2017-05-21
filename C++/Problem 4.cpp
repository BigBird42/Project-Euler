#include <iostream>
#include <string>
using namespace std;

bool is_palin(unsigned int);

int main() {
	unsigned int temp;
	unsigned int biggest = 0;
	for(unsigned int i = 100; i < 1000; i++){
		for(unsigned int j = 100; j < 1000; j++){
			temp = i*j;
			if(is_palin(temp) & (temp > biggest)){
				biggest = temp;
			}
		}
	}

	cout << biggest << '\n';
	
	return 0;
}

bool is_palin(unsigned int arg){
	string n = to_string(arg);
	for(unsigned int i = 0; i < n.length(); i++){
		if( n[i] != n[n.length() - i - 1] ){
			return false;
		}
	}
	return true;
}

#include <iostream>
using namespace std;
int main() {
	unsigned int num = 20;
	bool found = false;
	while(!found){
		num += 20;
		found = true;
		for(unsigned int i = 11; i < 21; i++){
			if(num % i != 0){
				found = false;
				break;
			}
		}
	}

	cout << num << endl;

	return 0;	
}
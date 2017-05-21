#include <iostream>
#include <cmath>
using namespace std;
int main(){
	unsigned int c = 0, temp = 0, temp2 = 0;
	for (unsigned int a = 0; a < 500; a++){
		for (unsigned int b = 0; b < 500; b++){
			c = 1000 - a - b;
			temp = pow(a,2) + pow(b,2);
			temp2 = pow(c,2);
			if (temp > temp2){
				continue;
			}
			else if (temp == temp2){
				cout << "The product is: " << a*b*c << endl;
			}
		}
	}

	return 0;
}
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

char key1 = 'a', key2 = 'a', key3 = 'a';
vector<char> cipher;
bool valid = true;
char temp;

int main(){
	//ifstream(data, "~//Project Euler//problem 59//cipher.txt");
	ifstream data;
	data.open("~//Project Euler//problem 59//test.txt");
	while (!data.eof()){
		data >> temp;
		cout << temp;
		cipher.push_back(temp);
	}
	/*
	for(; key1 <= 'z'; key1++){
		for(; key2 <= 'z'; key2++){
			for(; key3 <= 'z'; key3++){

				for (int i = 0; i < cipher.size; i++){
					if (i % 3 == 1){
						temp = key1 ^ cipher[i];
					}
					else if (i % 3 == 2){
						temp = key2 ^ cipher[i];
					}
					else if (i % 3 == 0){
						temp = key3 ^ cipher[i];
					}

					if ((temp >= 'A' && temp <= 'Z') || (temp >= 'a' && temp <= 'z'){
						valid = false;
						break;
					}
					if (valid){
						cout << "The key is: " key1 << key2 << key3 << endl;
					}
					valid = true;
				}
			}
		}
	}
	*/
	return 0;
}

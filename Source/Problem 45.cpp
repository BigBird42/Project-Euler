/*GOD FUCKING DAMNIT THIS TOOK LIKE 30 MINUTES TO FIND THE ANSWER*/
/*SOMEONE ELSE MADE CODE THAT DOES THIS IN 1MS; GOD FUCKING DAMNIT, WHAT THE FUCK*/

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
#define vector_length 100000

void triangle_calculate();
void pentagonal_calculate();
void hexagonal_calculate();

vector<unsigned int> triangle_numbers;
vector<unsigned int> pentagonal_numbers;
vector<unsigned int> hexagonal_numbers;

int main() {
	const clock_t begin_time = clock();
	unsigned int counter = 1;

	triangle_calculate();
	std::cout << "finished triangles" << endl;
	pentagonal_calculate();
	std::cout << "finished pentagonal" << endl;
	hexagonal_calculate();
	std::cout << "finished hexagonal" << endl;
	cout << endl;

	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < vector_length-1; i++) {
		/*find the best starting point for j*/
		for (j = 0; pentagonal_numbers[j] < triangle_numbers[i]; j++) {

		}

		for (; j < vector_length-1; j++) {
			/*find the best starting point for k*/
			for (k = 0; hexagonal_numbers[k] < triangle_numbers[i]; k++) {

			}

			for (; k < vector_length-1; k++) {
				if (pentagonal_numbers[j] < hexagonal_numbers[k]) {
					break;
				}

				if (triangle_numbers[i] == pentagonal_numbers[j] && pentagonal_numbers[j] == hexagonal_numbers[k]) {
					std::cout << endl; //uncomment when using loading bar
					std::cout << "triangle " << counter << ":" << endl;
					counter++;
					std::cout << "terms are : " << i + 1 << " " << j + 1 << " " << k + 1 << endl;
					std::cout << "the term = " << triangle_numbers[i] << endl;
					for (int z = 0; z < 25; z++) {
						std::cout << "-";
					}
					std::cout << endl;
					
				}
				
			}
			if (triangle_numbers[i] < pentagonal_numbers[j]) {
				break;
			}
		}
		
		if (i % 1000 == 0) {//loading bar
			std::cout << '*';
		}
		
	}

	std::cout << endl;
	std::cout << float(clock() - begin_time) / CLOCKS_PER_SEC << endl;
	return 0;
}

void triangle_calculate() {
	int temp = 0;
	for (int n = 1; n < vector_length; n++) {
		temp = 0;
		if (n % 2 == 1) {
			temp += n + 1;
			temp /= 2;
			temp *= n;
		}
		else {
			temp = n / 2;
			temp *= (n + 1);
		}
		triangle_numbers.push_back(temp);
	}
	
}

void pentagonal_calculate() {
	int temp = 0;
	for (int n = 1; n < vector_length; n++) {
		temp = 0;
		if (n % 2 == 1) {
			temp += 3 * n - 1;
			temp /= 2;
			temp *= n;
		}
		else {
			temp = n / 2;
			temp *= 3 * n - 1;
		}
		pentagonal_numbers.push_back(temp);
	}
	
}

void hexagonal_calculate() {
	int temp = 0;
	for (int n = 1; n < vector_length; n++) {
		temp = 0;
		temp = 2 * n - 1;
		temp *= n;
		hexagonal_numbers.push_back(temp);
	}

}

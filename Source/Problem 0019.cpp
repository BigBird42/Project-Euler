#include <iostream>
#include <vector>
using namespace std;

unsigned int year = 1901, month = 1, days_in_month = 30, track_day = 0;
unsigned int count = 0;

int main(){
	for (; year <= 2000; year++){
		for (month = 1; month <= 12; month++){
			if(month == 4 || month == 6 || month == 9 || month == 11){
				days_in_month = 30;
			}
			if(month == 2){
				if ( (year % 400 == 0) || ( (year % 100 == 0) && (year % 400 != 0) ))
					days_in_month = 29;
				else{
					days_in_month = 28;
				}
			}
			else{
				days_in_month = 31;
			}

			for(int day = 1; day <= days_in_month; day++){
				track_day++;
				if( (day == 1) && (track_day % 7 == 0) ){
					count++;
				}
			}
		}
	}

	cout << count << endl;

	return 0;
}

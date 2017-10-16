/* Kevin Ward, Ian Williams, Abhi Patel - Period 2
Period Problem 3
Three Digit Ascending and Descending Selection
*/

#include <iostream>
#include <conio.h>
#include <Windows.h>


using namespace std;

//removed kbhit for more madness options
void pause() {

	cout << '\n';
}


void main() {
	
	

		for (char i = 0; i < 30; ++i){
			int three_digit_number;


			//Deleted sleep commands, doesn't make it fast when its using sleep
			cout << "Would you kindly enter a three digit number, ";
			cout << "with kindness. : ";
			cin >> three_digit_number;


			int x = three_digit_number;
			int A = x / 100;
			int B = (x / 10) % 10;
			int C = x % 10;


				if (A < B && B < C) {
					cout << "Hey, " << A << B << C << " is pretty good for ascending..." << endl;
				}
				else if (A > B && B > C) {
					cout << "Wow " << A << B << C << " is descending..." << endl;
				}
				else {
					cout << "Feels bad man " << A << B << C << " is neither..." << endl;
				}
				
			}
	
		pause();

		}

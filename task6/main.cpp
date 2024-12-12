#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float P, R;
        int T;
	cout << "Enter the principal amount (P): ";
	cin >> P;
	cout << "Enter the time period in years (T): ";
	cin >> T;
	cout << "Enter the interest rate (R): ";
	cin >> R;
	float I = (P * T * R) / 100;
	cout << fixed << setprecision(2);
	cout << "Int (float): " << I << endl;
	cout << "Int (int): " << static_cast<int>(I) << endl;
	return 0;
	}	

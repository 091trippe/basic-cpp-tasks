#include <iostream>
#include <iomanip>
using namespace std;
int main() {
const double pi = 3.14;
double R;
cout << "Enter the radius R: ";
cin >> R;
double area = pi * R * R;
double circumference = 2 * pi * R;
cout << fixed << setprecision(2);
cout << "Area: " << area << endl;
cout << "Circumference: " << circumference << endl;
return 0;
} 

#include <iostream>
using namespace std;

int main() {
double  A, B, C;
 cout << "Enter dim; A, B and C" << endl;
 cin >> A >> B >> C;
 double surface_area = 2 * (A * B + B * C + A * C);
 double volume = A * B * C;
 cout << "Surface area " << surface_area << endl;
cout << "Volume " << volume << endl;
return 0;

}

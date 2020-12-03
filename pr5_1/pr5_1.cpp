#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y, const double z);
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double f = (h(1, t + s, s) + h(t, s * t, 1))/(1 + pow(h(s, 1, t), 2));
	cout << "f = " << f << endl;
	return 0;
}
double h(const double a, const double b, const double c)
{
	return (a * sin(b) + b * sin(a) + c * c);
}